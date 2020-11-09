#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "raylib.h"
#include<stdbool.h>


typedef struct{
    Rectangle wall;
    Texture2D imagem;
}wall;
typedef struct
{
    Rectangle position;
    Texture2D imagem;
}door;
typedef struct
{
    Rectangle dimen;
    Texture2D picture;
    bool key;
    int type;
    bool aberto;
}bau;
typedef struct
{
    Rectangle position;
    float deslocamentox;
    float deslocamentoy;
    Texture2D imagem;
}monster;
typedef struct
{
    Vector2 position;
    float radius;
    int colision;
    int life;
    bool chave;

    bool fim;
//    player balas[50];
}player;




int main(void)
{


    srand(time(NULL));
    int tam_muro =56;
    const int screenWidth = 900;
    const int screenHeight = 680;
    int intbauzada = 5;
    const int tam_width = 40;
    const int tam_height = 40;
    int contagem;
    const int horizontal_x = 5;
    const int vertical_y = 5;

    // porta --------------------
    door porta;
    porta.position = (Rectangle){500,292,40,40};

    // ----------------------------------------



    InitWindow(screenWidth, screenHeight, "NOME INDEFINIDO");
    Texture2D texture = LoadTexture("fundo.png");
   // Texture2D bauzin = LoadTexture("baufechado.png");

    Texture2D portita = LoadTexture("porta.png");

    Texture2D barravida1 = LoadTexture("barravida1.png");
    Texture2D barravida2 = LoadTexture("barravida2.png");
    Texture2D barravida3 = LoadTexture("barravida3.png");
    Texture2D barravida4 = LoadTexture("barravida4.png");


    Texture2D monstrorosa = LoadTexture("monstromapa.png");
/*    Texture2D portita = LoadTexture("porta.png");
    Texture2D portita = LoadTexture("porta.png");*/
    Texture2D desce0 = LoadTexture("desce1.png");
    Texture2D desce1 = LoadTexture("desce2.png");
    Texture2D desce2 = LoadTexture("desce3.png");
    Texture2D desce3 = LoadTexture("desce4.png");


    Texture2D direita1 = LoadTexture("direita1.png");
    Texture2D direita2 = LoadTexture("direita2.png");
    Texture2D direita3 = LoadTexture("direita3.png");
    Texture2D direita4 = LoadTexture("direita4.png");

    Texture2D esquerda1 = LoadTexture("esquerda1.png");
    Texture2D esquerda2 = LoadTexture("esquerda2.png");
    Texture2D esquerda3 = LoadTexture("esquerda3.png");
    Texture2D esquerda4 = LoadTexture("esquerda4.png");
    player player;
    Texture2D sobe1 = LoadTexture("sobe1.png");
    Texture2D sobe2 = LoadTexture("sobe2.png");
    Texture2D sobe3 = LoadTexture("sobe3.png");
    Texture2D sobe4 = LoadTexture("sobe4.png");
    //Definindo a posição inicial do personagem e definindos limites superior e lateral esquerdo.
    int position_initial_x = 40, position_initial_y = 50;
    player.position = (Vector2){position_initial_x,position_initial_y};
    player.radius = 2;
    player.chave = false;
    player.life = 5;
    player.fim = false;


    int  aleatorio,aleatorio1;

    wall retangulo[56];

    retangulo[0].wall = (Rectangle){600,523,40,40};
    retangulo[1].wall = (Rectangle){-50,0,0,0};
    retangulo[2].wall = (Rectangle){20,615,40,40};
    retangulo[3].wall = (Rectangle){-50,0,0,0};
    retangulo[4].wall = (Rectangle){161,108,40,40};
    retangulo[5].wall = (Rectangle){112,199,40,40};
    retangulo[6].wall = (Rectangle){112,199,40,40};
    retangulo[7].wall = (Rectangle){64,430,40,40};
    retangulo[8].wall = (Rectangle){211,291,40,40};
    retangulo[9].wall = (Rectangle){113,337,40,40};
    retangulo[10].wall = (Rectangle){310,62,40,40};
    retangulo[11].wall = (Rectangle){842,18,40,40};
    retangulo[12].wall = (Rectangle){646,107,40,40};

    //BORDA INFERIOR
   retangulo[13].wall = (Rectangle){16,659,880,40};
    //BORDA SUPERIOR
    retangulo[14].wall = (Rectangle){18,-30,840,40};
    //BORDA LATERAL ESQUERDA
    retangulo[15].wall = (Rectangle){-29,12,40,600};
    //BORDA LATERAL DIREITA
    retangulo[16].wall = (Rectangle){890,16,40,660};

    retangulo[17].wall = (Rectangle){64,430,40,40};
    retangulo[18].wall = (Rectangle){405,110,40,40};
    retangulo[19].wall = (Rectangle){112,523,40,40};
    retangulo[20].wall = (Rectangle){356,245,40,40};
    retangulo[21].wall = (Rectangle){747,245,40,40};
    retangulo[22].wall = (Rectangle){452,430,40,40};
    retangulo[23].wall = (Rectangle){747,386,40,40};
    retangulo[24].wall = (Rectangle){551,106,40,40};
    retangulo[25].wall = (Rectangle){210,430,40,40};
    retangulo[26].wall = (Rectangle){499,247,40,40};
    retangulo[27].wall = (Rectangle){161,476,40,40};
    retangulo[28].wall = (Rectangle){211,153,40,40};
    retangulo[29].wall = (Rectangle){258,523,40,40};
    retangulo[30].wall = (Rectangle){744,429,40,40};
    retangulo[31].wall = (Rectangle){404,15,40,40};
    retangulo[32].wall = (Rectangle){695,108,40,40};
    retangulo[33].wall = (Rectangle){839,197,40,40};
    retangulo[34].wall = (Rectangle){257,429,40,40};
    retangulo[35].wall = (Rectangle){258,336,40,40};
    retangulo[36].wall = (Rectangle){696,476,40,40};
    retangulo[37].wall = (Rectangle){697,107,40,40};
    retangulo[38].wall = (Rectangle){745,427,40,40};
    retangulo[39].wall = (Rectangle){356,383,40,40};
    retangulo[40].wall = (Rectangle){549,382,40,40};
    retangulo[41].wall = (Rectangle){598,381,40,40};
    retangulo[42].wall = (Rectangle){598,336,40,40};
    retangulo[43].wall = (Rectangle){598,290,40,40};
    retangulo[44].wall = (Rectangle){646,382,40,40};
    retangulo[45].wall = (Rectangle){647,428,40,40};
    retangulo[46].wall = (Rectangle){549,290,40,40};
    retangulo[47].wall = (Rectangle){259,613,40,40};
    retangulo[48].wall = (Rectangle){308,568,40,40};
    retangulo[49].wall = (Rectangle){695,474,40,40};
    retangulo[50].wall = (Rectangle){646,244,40,40};
    retangulo[51].wall = (Rectangle){549,382,40,40};




    bau baulucas[6];
    int qtd_bau = 5;
    //baus

    baulucas[1].dimen = (Rectangle){80,62,40,40};
    baulucas[2].dimen = (Rectangle){600,245,40,40};
    baulucas[3].dimen = (Rectangle){161,520,40,40};
    baulucas[4].dimen = (Rectangle){406,382,40,40};
    baulucas[5].dimen = (Rectangle){-50,-50,40,40};



int baus[] = {1,2,2,3,1};
    /*1-chave
      2-monstro
      3-vida*/



    for(int contador = 0; contador <= tam_muro; contador++){

            retangulo[contador].imagem = LoadTexture("muro.png");


            }
    for(int contadoo1 = 1;contadoo1<= qtd_bau;contadoo1++){

        baulucas[contadoo1].picture = LoadTexture("baufechado.png");



    }






int vazio;



    aleatorio = 0;
for( int g = 0;g<=qtd_bau;g++){
        baulucas[g].type = 0;
        baulucas[g].key = false;
        baulucas[g].aberto = false;
    }
    for(int contador  = 0; contador < qtd_bau; contador++)
    {
        vazio = 0;
        while(vazio == 0)
        {
            aleatorio = rand()%5;

            if(baulucas[aleatorio].type == 0)
            {
                baulucas[aleatorio].type = baus[contador];
                vazio = 1;
            }
        }
    }





    // onde o player nasce
    Vector2 playerPosition = { (float)850, (float)630 };


    //monstro
Vector2 positions[] = { {552,412},
                            {699,384},
                            {406,189},
                            {262,292},
                            {357,100},
                            {357,300},
                            {598,240},
                            {747,335},
                            {120,247}};

 Vector2 vida1 = {(int)50, (int)2};



Texture2D vida2 = barravida1,vida3 = barravida2,vida4 = barravida3,vida5 = barravida4;




    int qte_inimigos =sizeof(positions)/8;
    monster inimigos[qte_inimigos];




    for(int contador = 0; contador < qte_inimigos; contador++)
    {
        inimigos[contador].position = (Rectangle){positions[contador].x,positions[contador].y,tam_width, tam_height};

            inimigos[contador].deslocamentox = 10;
            inimigos[contador].deslocamentoy = 0;

    }



for(int u = 0;u <=qte_inimigos;u++){
        inimigos[u].imagem = monstrorosa;
    }


    SetTargetFPS(60);






            int aux,vida = 100;

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {





        //PLAYER MOVIMENTO


        if (IsKeyDown(KEY_RIGHT)) {
                playerPosition.x += 2.0f;
                for(int k = 0;k<=tam_muro;k++){
          if(CheckCollisionCircleRec(playerPosition,20,retangulo[k].wall) && k <= 51){
                       playerPosition.x = playerPosition.x - 2;

          }


          }
                }

        if (IsKeyDown(KEY_LEFT)){

            playerPosition.x -= 2.0f;
        for(int k = 0;k<=tam_muro;k++)
        {
                if(CheckCollisionCircleRec(playerPosition,20,retangulo[k].wall) && k <=51 ){
                       playerPosition.x = playerPosition.x + 2;

          }
          }
        }


        if (IsKeyDown(KEY_UP)) {

                playerPosition.y -= 2.0f;
        for(int k = 0;k<=tam_muro;k++)
        {
            if(CheckCollisionCircleRec(playerPosition,20,retangulo[k].wall)){
                        playerPosition.y = playerPosition.y + 2;


          }
          }
        }


        if (IsKeyDown(KEY_DOWN)){ playerPosition.y += 2.0f;
        for(int k = 0;k<=tam_muro;k++){

            if(CheckCollisionCircleRec(playerPosition,20,retangulo[k].wall) && k <= 51){
                       playerPosition.y = playerPosition.y - 2;


          }
        }

        }

        BeginDrawing();




            ClearBackground(WHITE);
            DrawTexture(texture, 0, 0, WHITE);

            DrawTexture(desce2,playerPosition.x-12,playerPosition.y-25,WHITE);
            if (IsKeyDown(KEY_UP)){DrawTexture(sobe1,playerPosition.x-12,playerPosition.y-25,WHITE);}
            if (IsKeyDown(KEY_RIGHT)){DrawTexture(direita1,playerPosition.x-12,playerPosition.y-25,WHITE);}
            if (IsKeyDown(KEY_LEFT)){DrawTexture(esquerda1,playerPosition.x-12,playerPosition.y-25,WHITE);}
            if (IsKeyDown(KEY_DOWN)){DrawTexture(desce0,playerPosition.x-12,playerPosition.y-25,WHITE);}
           // DrawCircleV(playerPosition, 20, BLACK);

           //inimigos
          for(int contagem2 = 0; contagem2 <= 8; contagem2++)
            {

                DrawTexture(inimigos[contagem2].imagem,inimigos[contagem2].position.x,inimigos[contagem2].position.y,WHITE);
            }


            //criando o muro
            for(int cont = 0;cont <=tam_muro;cont++) {
            DrawTexture(retangulo[cont].imagem,retangulo[cont].wall.x, retangulo[cont].wall.y,WHITE);
            }
            for(int conte = 0;conte <=qtd_bau;conte++) {
            DrawTexture(baulucas[conte].picture,baulucas[conte].dimen.x, baulucas[conte].dimen.y,WHITE);
            }
            //INFERIOR
            DrawRectangle(16,659,900,40,BLACK);
            //SUPERIOR
            DrawRectangle(18,-30,930,45,BLACK);
            //LATERAL ESQUERDA
            DrawRectangle(-29,12,45,680,BLACK);
            //LATERAL DIREITA
            DrawRectangle(890,16,80,660,BLACK);
            //PORTA

            DrawTexture(portita,500,292,WHITE);
            DrawTexture(portita,860,635,WHITE);

           //barra de vida
            if(player.life == 5){
            DrawTexture(vida2,vida1.x,vida1.y,WHITE);
           }else if(player.life == 4){
           DrawTexture(vida3,vida1.x,vida1.y,WHITE);
           }else if(player.life == 3){
           DrawTexture(vida4,vida1.x,vida1.y,WHITE);
           }else if(player.life == 2){
           DrawTexture(vida5,vida1.x,vida1.y,WHITE);
           }else if(player.life == 1){
               DrawTexture(vida5,vida1.x,vida1.y,WHITE);
           }
//--------------------------------------------------------------------------------------------------------------------------------------------
            //interação com bau
            //checando colisão Player --> baú
        for(int contador  = 0; contador <= qtd_bau; contador++)
        {
if(CheckCollisionCircleRec(playerPosition,20,baulucas[contador].dimen)){
   if(IsKeyDown(KEY_SPACE) && baulucas[contador].type == 1 && baulucas[contador].aberto == false)
               {

                       player.chave = true;

                       printf("ENCONTROU A CHAVE!");

                   baulucas[contador].picture = LoadTexture("bauaberto.png");
                   BeginDrawing();

                        ClearBackground(RAYWHITE);
                DrawText("VOCE ENCONTROU A CHAVE!", 200,240, 40, GRAY);
                DrawText("USE ELA APERTANDO [SPACE] NA PORTA!", 240,300, 20, LIGHTGRAY);

                        //Substituir por uma figura do baú aberto.


                   EndDrawing();
                   sleep(5);

                   baulucas[contador].aberto = true;
               }


                   else if(IsKeyDown(KEY_SPACE) && baulucas[contador].type == 2 && baulucas[contador].aberto == false)
               {
                   player.life -= 1;
                   baulucas[contador].aberto = true;
                   baulucas[contador].picture = LoadTexture("bauaberto.png");
                    BeginDrawing();
                        ClearBackground(RAYWHITE);
                        DrawText("VOCE ENCONTROU UM MONSTRO!", screenWidth/2 - MeasureText("VOCE ENCONTROU UM MONSTRO!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                    EndDrawing();
                     sleep(3);

                    if(player.life==0)
                        {
                            BeginDrawing();
                                ClearBackground(RAYWHITE);
                                DrawText("GAME OVER!",screenWidth/2 - 270,screenHeight/2 - 20, 80, BLACK);

                            EndDrawing();
                            sleep(5);
                            CloseWindow();

                        }
               }
               else if(IsKeyDown(KEY_SPACE) && baulucas[contador].type == 3 && baulucas[contador].aberto == false)
               {
                   baulucas[contador].aberto = true;
                   if(player.life < 4){ player.life++;}
                   baulucas[contador].picture = LoadTexture("bauaberto.png");

                   BeginDrawing();
                        ClearBackground(RAYWHITE);
                        DrawText("VOCE ENCONTROU UMA POCAO DE VIDA!", screenWidth/2 - MeasureText("VOCE ENCONTROU UMA POCAO DE VIDA!", 40)/2, screenHeight/2 - 40, 40, GRAY);


                   EndDrawing();
                    sleep(3);


               }

            }
        }

        // porta
if(CheckCollisionCircleRec(playerPosition,20,porta.position))
        {

            if(player.chave == true && IsKeyDown(KEY_SPACE))
            {

                BeginDrawing();
                    ClearBackground(RAYWHITE);
                    DrawText("VICTORY",screenWidth/2 - 270,screenHeight/2 - 20, 80, BLACK);

                EndDrawing();
                player.fim = true;
                sleep(5);
                CloseWindow();
            }else{
                if (IsKeyDown(KEY_UP)){playerPosition.y = playerPosition.y + 2;}
                else if(IsKeyDown(KEY_RIGHT)){playerPosition.x = playerPosition.x - 2;}
            }

        }

//-----------------------------------------------------------------------------------------------------------------------------------------
//colisão player com monstro
for (int p = 0;p<=8;p++){
if(CheckCollisionCircleRec(playerPosition,20,inimigos[p].position)){
    player.life = player.life -1;
    inimigos[p].position = (Rectangle){-500,-500,-1,-1};


    if(player.life==0)
                        {
                            BeginDrawing();
                                ClearBackground(RAYWHITE);
                                DrawText("GAME OVER!",screenWidth/2 - 270,screenHeight/2 - 20, 80, BLACK);

                            EndDrawing();
                            sleep(5);
                            CloseWindow();


                        }
}
}








//-----------------------------------------------------------




        EndDrawing();

// colisão monstro bordas----------------------------------------------------------------------------------------------
       //lateral esquerda
       for(contagem = 0; contagem < qte_inimigos; contagem++)
        {
            if(inimigos[contagem].position.x <= 24)
            {


                    inimigos[contagem].position.x =  24;
                    inimigos[contagem].position.y += inimigos[contagem].deslocamentoy;
                    inimigos[contagem].deslocamentox *= -1;
            }
            // lateral direita
            if(inimigos[contagem].position.x >= 860)
            {

                    inimigos[contagem].position.x =  858;
                    inimigos[contagem].position.y += inimigos[contagem].deslocamentoy;
                    inimigos[contagem].deslocamentox *= -1;
            }

            else
            {
                inimigos[contagem].position.x += inimigos[contagem].deslocamentox;
                inimigos[contagem].position.y += inimigos[contagem].deslocamentoy;
            }
        }

//---------------------------------------------------------------------------------------------------




        }


    UnloadTexture(texture);


    CloseWindow();

    return 0;
}



