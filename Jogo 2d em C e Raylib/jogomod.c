if(intbauzada == 1 && vazio == 0){
                DrawText("VOCE ENCONTROU A CHAVE!", screenWidth/2 - MeasureText("VOCE ENCONTROU A CHAVE!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                DrawText("VOCE VENCEU A FASE 2", screenWidth/2 - MeasureText("VICTORY", 20)/2, screenHeight/2, 20, LIGHTGRAY);
                    if(CheckCollisionCircleRec(playerPosition,20,baulucas[1].dimen) && IsKeyDown(KEY_SPACE)){baulucas[1].aberto;}
if(CheckCollisionCircleRec(playerPosition,20,baulucas[1].dimen) && IsKeyDown(KEY_SPACE)){baulucas[1].picture = LoadTexture("bauaberto.png"); baulucas[1].aberto = 1;}
if(CheckCollisionCircleRec(playerPosition,20,baulucas[2].dimen) && IsKeyDown(KEY_SPACE)){baulucas[2].picture = LoadTexture("bauaberto.png"); baulucas[2].aberto = 1;}
if(CheckCollisionCircleRec(playerPosition,20,baulucas[3].dimen) && IsKeyDown(KEY_SPACE)){baulucas[3].picture = LoadTexture("bauaberto.png"); baulucas[3].aberto = 1;}
if(CheckCollisionCircleRec(playerPosition,20,baulucas[4].dimen) && IsKeyDown(KEY_SPACE)){baulucas[4].picture = LoadTexture("bauaberto.png"); baulucas[4].aberto = 1;}
if(CheckCollisionCircleRec(playerPosition,20,baulucas[5].dimen) && IsKeyDown(KEY_SPACE)){baulucas[5].picture = LoadTexture("bauaberto.png"); baulucas[5].aberto = 1;}

                }
                if(intbauzada == 2 && vazio1 == 0){
if(CheckCollisionCircleRec(playerPosition,20,baulucas[1].dimen) && IsKeyDown(KEY_SPACE)){
        baulucas[1].picture = LoadTexture("bauaberto.png");
DrawText("VOCE ENCONTROU UMA POCAO DE VIDA!", screenWidth/2 - MeasureText("VOCE ENCONTROU UMA POCAO DE VIDA!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                vida+=10;
                baulucas[1].aberto = 1;
}
if(CheckCollisionCircleRec(playerPosition,20,baulucas[2].dimen) && IsKeyDown(KEY_SPACE)){
        baulucas[2].picture = LoadTexture("bauaberto.png");
DrawText("VOCE ENCONTROU UMA POCAO DE VIDA!", screenWidth/2 - MeasureText("VOCE ENCONTROU UMA POCAO DE VIDA!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                vida+=10;
                baulucas[2].aberto = 1;
}
if(CheckCollisionCircleRec(playerPosition,20,baulucas[3].dimen) && IsKeyDown(KEY_SPACE)){
        baulucas[3].picture = LoadTexture("bauaberto.png");
DrawText("VOCE ENCONTROU UMA POCAO DE VIDA!", screenWidth/2 - MeasureText("VOCE ENCONTROU UMA POCAO DE VIDA!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                vida+=10;
                baulucas[3].aberto = 1;
}

if(CheckCollisionCircleRec(playerPosition,20,baulucas[4].dimen) && IsKeyDown(KEY_SPACE)){
        baulucas[4].picture = LoadTexture("bauaberto.png");
DrawText("VOCE ENCONTROU UMA POCAO DE VIDA!", screenWidth/2 - MeasureText("VOCE ENCONTROU UMA POCAO DE VIDA!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                vida+=10;
                baulucas[4].aberto = 1;

}

if(CheckCollisionCircleRec(playerPosition,20,baulucas[5].dimen) && IsKeyDown(KEY_SPACE)){
        baulucas[5].picture = LoadTexture("bauaberto.png");
DrawText("VOCE ENCONTROU UM MONSTRO!", screenWidth/2 - MeasureText("VOCE ENCONTROU UM MONSTRO!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                vida+=10;
baulucas[5].aberto = 1;


                }
                }


                else if(intbauzada == 3 && vazio2 == 0){

if(CheckCollisionCircleRec(playerPosition,20,baulucas[1].dimen) && IsKeyDown(KEY_SPACE)){
        baulucas[1].picture = LoadTexture("bauaberto.png");
DrawText("VOCE ENCONTROU UM MONSTRO!", screenWidth/2 - MeasureText("VOCE ENCONTROU UM MONSTRO!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                vida-=10;

baulucas[1].aberto = 1;
}
if(CheckCollisionCircleRec(playerPosition,20,baulucas[2].dimen) && IsKeyDown(KEY_SPACE)){
        baulucas[2].picture = LoadTexture("bauaberto.png");
DrawText("VOCE ENCONTROU UM MONSTRO!", screenWidth/2 - MeasureText("VOCE ENCONTROU UM MONSTRO!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                vida-=10;
baulucas[2].aberto = 1;}
if(CheckCollisionCircleRec(playerPosition,20,baulucas[3].dimen) && IsKeyDown(KEY_SPACE)){
        baulucas[3].picture = LoadTexture("bauaberto.png");
DrawText("VOCE ENCONTROU UM MONSTRO!", screenWidth/2 - MeasureText("VOCE ENCONTROU UM MONSTRO!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                vida-=10;
baulucas[3].aberto = 1;
}

if(CheckCollisionCircleRec(playerPosition,20,baulucas[4].dimen) && IsKeyDown(KEY_SPACE)){
        baulucas[4].picture = LoadTexture("bauaberto.png");
DrawText("VOCE ENCONTROU UM MONSTRO!", screenWidth/2 - MeasureText("VOCE ENCONTROU UM MONSTRO!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                vida-=10;

baulucas[4].aberto = 1;
}

if(CheckCollisionCircleRec(playerPosition,20,baulucas[5].dimen) && IsKeyDown(KEY_SPACE)){
        baulucas[5].picture = LoadTexture("bauaberto.png");
DrawText("VOCE ENCONTROU UM MONSTRO!", screenWidth/2 - MeasureText("VOCE ENCONTROU UM MONSTRO!", 40)/2, screenHeight/2 - 40, 40, GRAY);
                vida-=10;

baulucas[5].aberto = 1;

                }

                }
