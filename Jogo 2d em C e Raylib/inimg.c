#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>
#include <time.h>
#define linhas 14
#define colunas 18


const int screenWidth = 900;
const int screenHeight = 680;

const int Zero_eixo_x = 20;
const int Zero_eixo_y = 20;

const int tam_width = 40;
const int tam_height = 40;

const int deslocamento_x = 5;
const int deslocamento_y = 5;
typedef struct
{
    Rectangle position;
    float deslocamentox;
    float deslocamentoy;
}monster;

int main()
{

    srand(time(NULL));

    Vector2 positions[] = { {552,65},
                            {699,384},
                            {406,570},
                            {262,292},
                            {357,433},
                            {357,155},
                            {598,616},
                            {747,201},
                            {67,247}};

    float radius = 25;
    Vector2 circulos[] = {  {screenWidth/2,50},
                            {screenWidth/2,screenHeight/2},
                            {screenWidth-radius,screenHeight/2},
                            {screenWidth*3/4,screenHeight*3/4},
                            {radius +10, screenHeight/2},
                            {radius +10+2*radius, screenHeight/2}};



    int obstaculos = sizeof(circulos)/8;
    InitWindow(screenWidth, screenHeight,"construction inimigos");
    int qte_inimigos = sizeof(positions)/8;
    monster inimigos[qte_inimigos];

    for(int contador = 0; contador < qte_inimigos; contador++)
    {
        inimigos[contador].position = (Rectangle){positions[contador].x,positions[contador].y,tam_width, tam_height};
        if(contador%2 == 0)
        {
            inimigos[contador].deslocamentox = 10;
            inimigos[contador].deslocamentoy = 0;
        }
        else
        {
            inimigos[contador].deslocamentox = 0;
            inimigos[contador].deslocamentoy = 10;
        }

    }

    int contagem = 0, aleatorio;

    SetTargetFPS(20);
    for(int contador  = 0; contador < qte_inimigos; contador++)
    {
        printf("%f -- %f\n", inimigos[contador].position.x, inimigos[contador].position.y);
    }
    int contagem1;
    while(!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
            for(contagem  = 0; contagem < qte_inimigos; contagem++)
            {
                DrawRectangleRec(inimigos[contagem].position,WHITE);
            }
           for(contagem = 0; contagem < obstaculos; contagem++)
            {
                DrawCircleV(circulos[contagem],radius,BLUE);
            }

        EndDrawing();
        // colisão monstro bordas
        for(contagem = 0; contagem < qte_inimigos; contagem++)
        {
            if(inimigos[contagem].position.x <= Zero_eixo_x)
            {
               aleatorio = rand() % 3;
               if(aleatorio == 0)
               {
                    inimigos[contagem].position.x =  Zero_eixo_x+1;
                    inimigos[contagem].position.y += inimigos[contagem].deslocamentoy;
                    inimigos[contagem].deslocamentox *= -1;
               }
               else if(aleatorio == 1)
               {
                    inimigos[contagem].position.x =  Zero_eixo_x+1;
                    inimigos[contagem].position.y += inimigos[contagem].deslocamentoy;
                    inimigos[contagem].deslocamentox = 0;
                    inimigos[contagem].deslocamentoy = 10;
               }
               else if(aleatorio == 2)
               {
                    inimigos[contagem].position.x =  Zero_eixo_x+1;
                    inimigos[contagem].position.y += inimigos[contagem].deslocamentoy;
                    inimigos[contagem].deslocamentox = 0;
                    inimigos[contagem].deslocamentoy = -10;
               }
            }
            if(inimigos[contagem].position.x >= screenWidth - 40)
            {
                aleatorio = rand() % 3;
               if(aleatorio == 0)
               {
                    inimigos[contagem].position.x =  screenWidth-41;
                    inimigos[contagem].position.y += inimigos[contagem].deslocamentoy;
                    inimigos[contagem].deslocamentox *= -1;
               }
               else if(aleatorio == 1)
               {
                    inimigos[contagem].position.x =  screenWidth-41;
                    inimigos[contagem].position.y += inimigos[contagem].deslocamentoy;
                    inimigos[contagem].deslocamentox = 0;
                    inimigos[contagem].deslocamentoy = 10;
               }
               else if(aleatorio == 2)
               {
                    inimigos[contagem].position.x =  screenWidth-41;
                    inimigos[contagem].position.y += inimigos[contagem].deslocamentoy;
                    inimigos[contagem].deslocamentox = 0;
                    inimigos[contagem].deslocamentoy = -10;
               }
            }
            if(inimigos[contagem].position.y >= screenHeight-40)
            {
                aleatorio = rand() % 3;

                if(aleatorio == 0)
                {
                        inimigos[contagem].position.y = screenHeight - 41;
                        inimigos[contagem].position.x += inimigos[contagem].deslocamentox;
                        inimigos[contagem].deslocamentoy *= -1;
                }
                else if(aleatorio == 1)
                {
                    inimigos[contagem].position.y = screenHeight - 41;
                    inimigos[contagem].position.x += inimigos[contagem].deslocamentox;
                    inimigos[contagem].deslocamentox = 10;
                    inimigos[contagem].deslocamentoy = 0;
                }
                else if(aleatorio == 2)
                {
                    inimigos[contagem].position.y = screenHeight - 41;
                    inimigos[contagem].position.x += inimigos[contagem].deslocamentox;
                    inimigos[contagem].deslocamentox = -10;
                    inimigos[contagem].deslocamentoy = 0;
                }

            }
            if(inimigos[contagem].position.y <= Zero_eixo_y)
            {

                aleatorio = rand() % 3;

                if(aleatorio == 0)
                {
                        inimigos[contagem].position.y = Zero_eixo_y + 1;
                        inimigos[contagem].position.x += inimigos[contagem].deslocamentox;
                        inimigos[contagem].deslocamentoy *= -1;
                }
                else if(aleatorio == 1)
                {
                    inimigos[contagem].position.y = Zero_eixo_y + 1;
                    inimigos[contagem].position.x += inimigos[contagem].deslocamentox;
                    inimigos[contagem].deslocamentox = 10;
                    inimigos[contagem].deslocamentoy = 0;
                }
                else if(aleatorio == 2)
                {
                    inimigos[contagem].position.y = Zero_eixo_y+1;
                    inimigos[contagem].position.x += inimigos[contagem].deslocamentox;
                    inimigos[contagem].deslocamentox = -10;
                    inimigos[contagem].deslocamentoy = 0;
                }
            }
            else
            {
                inimigos[contagem].position.x += inimigos[contagem].deslocamentox;
                inimigos[contagem].position.y += inimigos[contagem].deslocamentoy;
            }
        }

        //colisão monstros com baus
        for(contagem = 0; contagem < obstaculos; contagem++)
        {
            for(contagem1  = 0; contagem1 < qte_inimigos; contagem1++)
            {
                    if(CheckCollisionCircleRec(circulos[contagem],radius,inimigos[contagem1].position))
                    {
                        //deslocamento direita --> esquerda
                       if(inimigos[contagem1].deslocamentox>0)
                       {
                           aleatorio = rand()%3;
                           if(aleatorio == 0)
                           {
                                inimigos[contagem1].position.x =  circulos[contagem].x - (tam_width+radius+1);
                                inimigos[contagem1].position.y += inimigos[contagem1].deslocamentoy;
                                inimigos[contagem1].deslocamentox *= -1;
                           }
                           else if(aleatorio == 1)
                           {    printf("aleatorio: 1\n");
                                inimigos[contagem1].position.x =  circulos[contagem].x - (tam_width+radius+1);
                                inimigos[contagem1].position.y += inimigos[contagem1].deslocamentoy;
                                inimigos[contagem1].deslocamentox = 0;
                                inimigos[contagem1].deslocamentoy = 10;
                           }
                           else if(aleatorio == 2)
                           {
                                inimigos[contagem1].position.x =  circulos[contagem].x - (tam_width+radius+1);
                                inimigos[contagem1].position.y += inimigos[contagem1].deslocamentoy;
                                inimigos[contagem1].deslocamentox = 0;
                                inimigos[contagem1].deslocamentoy = -10;
                           }
                       }
                       //deslocamento direita --> esquerda
                       else if(inimigos[contagem1].deslocamentox<0)
                       {
                           aleatorio = rand()%3;
                           if(aleatorio == 0)
                           {
                                inimigos[contagem1].position.x =  circulos[contagem].x + (radius+1);
                                inimigos[contagem1].position.y += inimigos[contagem1].deslocamentoy;
                                inimigos[contagem1].deslocamentox *= -1;
                           }
                           else if(aleatorio == 1)
                           {
                                inimigos[contagem1].position.x =  circulos[contagem].x + (radius+1);
                                inimigos[contagem1].position.y += inimigos[contagem1].deslocamentoy;
                                inimigos[contagem1].deslocamentox = 0;
                                inimigos[contagem1].deslocamentoy = 10;
                           }
                           else if(aleatorio == 2)
                           {
                                inimigos[contagem1].position.x =  circulos[contagem].x + (radius+1);
                                inimigos[contagem1].position.y += inimigos[contagem1].deslocamentoy;
                                inimigos[contagem1].deslocamentox = 0;
                                inimigos[contagem1].deslocamentoy = -10;
                           }
                       }
                       //deslocamento cima --> baixo
                       else if(inimigos[contagem1].deslocamentoy>0)
                       {
                           aleatorio = rand()%3;
                           if(aleatorio == 0)
                           {
                                inimigos[contagem1].position.y =  circulos[contagem].y - (radius+tam_height+1);
                                inimigos[contagem1].position.x += inimigos[contagem1].deslocamentox;
                                inimigos[contagem1].deslocamentoy *= -1;
                           }
                           else if(aleatorio == 1)
                           {
                                inimigos[contagem1].position.y =  circulos[contagem].y - (radius+tam_height+1);
                                inimigos[contagem1].position.x += inimigos[contagem1].deslocamentox;

                                inimigos[contagem1].deslocamentoy = 0;
                                inimigos[contagem1].deslocamentox = 10;
                           }
                           else if(aleatorio == 2)
                           {
                                inimigos[contagem1].position.y =  circulos[contagem].y - (radius+tam_height+1);
                                inimigos[contagem1].position.x += inimigos[contagem1].deslocamentox;
                                inimigos[contagem1].deslocamentoy = 0;
                                inimigos[contagem1].deslocamentox = -10;
                           }
                       }
                       //deslocamento baixo --> cima
                       else if(inimigos[contagem1].deslocamentoy<0)
                       {
                           aleatorio = rand()%3;
                           if(aleatorio == 0)
                           {
                                inimigos[contagem1].position.y =  circulos[contagem].y + (radius+1);
                                inimigos[contagem1].position.x += inimigos[contagem1].deslocamentox;
                                inimigos[contagem1].deslocamentoy *= -1;
                           }
                           else if(aleatorio == 1)
                           {
                                inimigos[contagem1].position.y =  circulos[contagem].y + (radius+1);
                                inimigos[contagem1].position.x += inimigos[contagem1].deslocamentox;

                                inimigos[contagem1].deslocamentoy = 0;
                                inimigos[contagem1].deslocamentox = 10;
                           }
                           else if(aleatorio == 2)
                           {
                                inimigos[contagem1].position.y =  circulos[contagem].y + (radius+1);
                                inimigos[contagem1].position.x += inimigos[contagem1].deslocamentox;
                                inimigos[contagem1].deslocamentoy = 0;
                                inimigos[contagem1].deslocamentox = -10;
                           }
                       }
                    }
                }
            }
        }
    CloseWindow();

    return 0;
}
