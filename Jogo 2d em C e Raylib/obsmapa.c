#include <stdio.h>
#include <stdlib.h>
#include "raylib.h"
#include <unistd.h>
typedef struct
{
    Rectangle dimen;
    Texture2D imagem;

}Tret;

const int screenwidth = 900;
const int screenheight = 680;
int contagem = 0, contador;

int main()
{
    //Alterar a quantidade de obstáculos como queira.
    int qte_obstaculos= 50;
    Tret retangulo[qte_obstaculos];

    int dimension_width = 43 ;
    int dimension_height = 43;


    SetTargetFPS(60);

    InitWindow(screenwidth, screenheight,"Construcao mapa");
    Texture2D mapa = LoadTexture("fundo.png");

        for(int contador = 0; contador < qte_obstaculos; contador++)
        {
            retangulo[contador].dimen = (Rectangle){0};
            retangulo[contador].imagem = LoadTexture("muro.png");

        }

        while(!WindowShouldClose())
        {
            BeginDrawing();
                ClearBackground(RAYWHITE);
                DrawTexture(mapa,0,0,RAYWHITE);

              for(contador = 0; contador <= contagem; contador++)
                {
                        DrawTexture(retangulo[contador].imagem,retangulo[contador].dimen.x, retangulo[contador].dimen.y,RAYWHITE);
                }
            EndDrawing();

            if(IsKeyDown(KEY_LEFT))
            {
                retangulo[contagem].dimen.x -= 1;
            }
            if(IsKeyDown(KEY_RIGHT))
            {
                retangulo[contagem].dimen.x += 1;
            }
            if(IsKeyDown(KEY_DOWN))
            {
                retangulo[contagem].dimen.y += 1;
            }
            if(IsKeyDown(KEY_UP))
            {
                retangulo[contagem].dimen.y -= 1;
            }
            if(IsKeyDown(KEY_ENTER))
            {
                retangulo[contagem].dimen = (Rectangle){retangulo[contagem].dimen.x, retangulo[contagem].dimen.y,dimension_width, dimension_height};

                contagem++;
                sleep(1);
            }
        }
    CloseWindow();
    for (contador = 0; contador < contagem; contador++)
        {
            printf("{%.f,%.f},\n", retangulo[contador].dimen.x, retangulo[contador].dimen.y);
        }
    return 0;
}


