#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <locale.h>



void limpaTela();

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int matriz[10][10],zumbi,obstaculo,rick,aleatorioZ=1,aleatorioO=0,aleatorioR=0,aleatorio,arma,balas = 0,soma,linha,coluna;
    //Gera o mapa com valor 0 em todas as casas
    for(int linha=0;linha<=9;linha++){
        for(int coluna = 0;coluna<=9;coluna++){

            matriz[linha][coluna] = 0;
        }
        printf("\n");
    }
    linha=0,coluna=0;
    //zumbis aleatorios
    int vazio = 0;
    for(int contador = 1; contador <= 15; contador++){
        do{
            vazio = 0;
            linha = rand()%10;
            coluna = rand()%10;
        
            if(matriz[linha][coluna] == 0)
            {
                vazio = 1;
                matriz[linha][coluna] = 2;
            }
        }while(vazio == 0);
    }
    //carros aleatorios quantidade:4
    linha=0,coluna=0;
    vazio =0;
    for(int contador = 1; contador <= 4; contador++){
    do{
        vazio = 0;
    linha = rand()%10;
    coluna = rand()%10;
    
    if(matriz[linha][coluna] == 0){
        vazio = 1;
    matriz[linha][coluna] = 3;
    }
    }while(vazio==0);
    }
    //arvores aleatorias quantidade:7
    linha=0,coluna=0,vazio=0;
    
    for(int contador = 1; contador <= 8; contador++){
    do{
        vazio = 0;
    linha = rand()%10;
    coluna = rand()%10;
    
    if(matriz[linha][coluna] == 0){
        vazio = 1;
    matriz[linha][coluna] = 6;
    }
    }while(vazio == 0);
    }
    //pedras aleatorias quantidade:8
    linha=0,coluna=0,vazio = 0;
    
    for(int contador = 1; contador <= 9; contador++){
    do{
        vazio = 0;
    linha = rand()%10;
    coluna = rand()%10;
    if(matriz[linha][coluna] == 0){
        vazio = 1;
    matriz[linha][coluna] = 7;
    }
    }while(vazio == 0);
    }
    //balas aleatorias quantidade:4
    linha=0,coluna=0,vazio=0;
    
    for(int contador = 1; contador <= 4; contador++){
    do{
        vazio = 0;
    linha = rand()%10;
    coluna = rand()%10;
    if(matriz[linha][coluna] == 0){
        vazio = 1;
    matriz[linha][coluna] = 4;
    }
    }while(vazio == 0);
    }

int vidaRick = 1;
char move;
linha =0,coluna=0;
//saida
do{
linha = rand()%10;
coluna = rand()%10;
if(matriz[linha][coluna] == 0){ matriz[linha][coluna] = 5;}
}while(matriz[linha][coluna] != 5);
//rick
do{
linha = rand()%10;
coluna = rand()%10;
if(matriz[linha][coluna] == 0){ matriz[linha][coluna] = 1;}
balas = 0;
}while(matriz[linha][coluna] != 1);
while(vidaRick == 1){
    limpaTela();
   
//imprime o mapa
    for(int linha=0;linha<=9;linha++){
        for(int coluna = 0;coluna<=9;coluna++){
            if(matriz[linha][coluna] == 1){printf("|R|  ");}
            if(matriz[linha][coluna] == 5){printf("|S|  ");}
            if(matriz[linha][coluna] == 2){printf("|Z|  ");}
            if(matriz[linha][coluna] == 3){printf("| |  ");}
            if(matriz[linha][coluna] == 6){printf("| |  ");}
            if(matriz[linha][coluna] == 7){printf("| |  ");}
            if(matriz[linha][coluna] == 10){printf("|C|  ");}
            if(matriz[linha][coluna] == 11){printf("|A|  ");}
            if(matriz[linha][coluna] == 12){printf("|P|  ");}
            if(matriz[linha][coluna] == 4){printf("|B|  ");}
            if(matriz[linha][coluna] == 0){printf("| |  ");}
            
        }
        printf("\n");
    }

printf("Para onde deseja se movimentar:\nW - cima\nS - baixo\nA - esquerda\nD - direita\n");
scanf("%c",&move);

switch (move)
{
    
    //movimentação cima
case 'w':

if(linha>0){
    //rick encontra a saida
    if(matriz[linha-1][coluna] == 5){
    matriz[linha][coluna] = 0;
    linha--;
    matriz[linha][coluna] = 1;
    printf("Rick encontrou a saida!");
    vidaRick = 2;
    break;
    }
    //Rick encontra balas
    if(matriz[linha-1][coluna] ==4 ){

    matriz[linha][coluna] = 0;
    linha--;
    matriz[linha][coluna] = 1;
    printf("Rick entrou municão!\n");
    balas++;
    printf("Rick se movimentou!\n");
    printf("Rick tem %d balas na sua arma!\n",balas);
    break;
    }
    //rick encontra zumbi
    if(matriz[linha-1][coluna] == 2){
        if(balas>0){ 
    matriz[linha][coluna] = 0;
    linha--;
    matriz[linha][coluna] = 1;
    balas--;
    printf("Rick mata um zumbi!\n Restam %d balas",balas);
        
    }else{printf("Rick Morreu!"); vidaRick = 0; break;}

    break;
    }
    //obstaculo carro
    if(matriz[linha-1][coluna] == 3||matriz[linha-1][coluna] == 10){
        printf("Rick encontrou um Carro!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha-1][coluna] = 10;

        break;
    }
    //obstaculo arvore
        if(matriz[linha-1][coluna] == 6||matriz[linha-1][coluna] == 11){
        printf("Rick encontrou uma arvore!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
       matriz[linha-1][coluna] = 11;
        break;
        }
    //obstaculo pedras
    if(matriz[linha-1][coluna] == 7||matriz[linha-1][coluna] == 12){
        printf("Rick encontrou uma Pedra!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha-1][coluna] = 12;
        
        break;
    }
    //movimentação padrão
    if(matriz[linha-1][coluna] !=3 &&matriz[linha-1][coluna] !=4 && matriz[linha-1][coluna] !=5 && matriz[linha-1][coluna] !=2&& matriz[linha-1][coluna] !=6&& matriz[linha-1][coluna] !=7){
   
    matriz[linha][coluna] = 0;
    matriz[linha-1][coluna] = 1;
    linha--;
    //Movimentação Zumbi
    //move com 3 casas
    /*if(matriz[linha-2][coluna] != 2 ||matriz[linha+2][coluna] != 2||matriz[linha][coluna-2] != 2||matriz[linha][coluna+2] != 2){
    if(matriz[linha-3][coluna] == 2||matriz[linha+3][coluna] == 2||matriz[linha][coluna-3] == 2||matriz[linha][coluna+3] == 2){
    printf("Rick está sendo perseguido!\n");
    if(matriz[linha-3][coluna] == 2){ matriz[linha-3][coluna] = 0; matriz[linha-2][coluna] = 2;}
    if(matriz[linha+3][coluna] == 2){ matriz[linha+3][coluna] = 0; matriz[linha+2][coluna] = 2;} 
    if(matriz[linha][coluna+3] == 2){ matriz[linha][coluna+3] = 0; matriz[linha][coluna+2] = 2;}
    if(matriz[linha][coluna-3] == 2){ matriz[linha][coluna-3] = 0; matriz[linha][coluna-2] = 2;}

    }
     }*/
     //move com duas casas
    if(matriz[linha-1][coluna] == 0||matriz[linha+1][coluna] == 0||matriz[linha][coluna-1] == 0||matriz[linha][coluna+1] == 0){
    if(matriz[linha-2][coluna] == 2||matriz[linha+2][coluna] == 2||matriz[linha][coluna-2] == 2||matriz[linha][coluna+2] == 2){
    printf("Rick está sendo perseguido!\n");
    if(matriz[linha-2][coluna] == 2){ matriz[linha-2][coluna] = 0; matriz[linha-1][coluna] = 2;}
    if(matriz[linha+2][coluna] == 2){ matriz[linha+2][coluna] = 0; matriz[linha+1][coluna] = 2;} 
    if(matriz[linha][coluna+2] == 2){ matriz[linha][coluna+2] = 0; matriz[linha][coluna+1] = 2;}
    if(matriz[linha][coluna-2] == 2){ matriz[linha][coluna-2] = 0; matriz[linha][coluna-1] = 2;}

    }
    }else{printf("zumbi ficou preso!\n");}
    printf("Rick se movimentou!\n");
    printf("Rick tem %d balas na sua arma!\n",balas);
    break;
    }
    
    


}else{printf("Rick não pode sair porai!\n"); break;}

break;
    //movimentação baixo
case 's':

if(linha<9){
    //rick encontra zumbi
    if(matriz[linha+1][coluna] == 2){
        if(balas>0){ 
    matriz[linha][coluna] = 0;
    linha++;
    matriz[linha][coluna] = 1;
    balas--;
    printf("Rick mata um zumbi!\n Restam %d balas",balas);
        
    }else{printf("Rick Morreu!"); vidaRick = 0; break;}

    break;
    }
    //rick encontra a saída
    if(matriz[linha+1][coluna] == 5){
        matriz[linha][coluna] = 0;
        linha++;
        matriz[linha][coluna] = 1;
    printf("Rick encontrou a saida!");
    vidaRick = 2;
    break;
    }
    //Rick encontra balas
    if(matriz[linha+1][coluna] ==4 ){
    matriz[linha][coluna] = 0;
    linha++;
    matriz[linha][coluna] = 1;
    printf("Rick entrou municão!\n");
    balas++;
    printf("Rick se movimentou!\n");
    printf("Rick tem %d balas na sua arma!\n",balas);
    break;
    }
    //obstaculo carro
    if(matriz[linha+1][coluna] == 3||matriz[linha+1][coluna] == 10){
        printf("Rick encontrou um carro!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha+1][coluna] = 10;
        break;

    }
    
    //obstaculo arvore
        if(matriz[linha+1][coluna] == 6 ||matriz[linha+1][coluna] == 11){
        printf("Rick encontrou uma arvore!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha+1][coluna] = 11;
        break;
        }
    //obstaculo pedras
    if(matriz[linha+1][coluna] == 7||matriz[linha+1][coluna] == 12){
        printf("Rick encontrou uma pedra!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha+1][coluna] = 12;

        break;
    }
    //movimentação padrão
    if(matriz[linha+1][coluna] !=3 &&matriz[linha+1][coluna] !=4 && matriz[linha+1][coluna] !=5 && matriz[linha+1][coluna] !=2&& matriz[linha+1][coluna] !=6&& matriz[linha+1][coluna] !=7){
    matriz[linha][coluna] = 0;
    matriz[linha+1][coluna] = 1;
    linha++;
    //Movimentação Zumbi
    //move com 3 casas
   /* if(matriz[linha-2][coluna] != 2 ||matriz[linha+2][coluna] != 2||matriz[linha][coluna-2] != 2||matriz[linha][coluna+2] != 2){
    if(matriz[linha-3][coluna] == 2||matriz[linha+3][coluna] == 2||matriz[linha][coluna-3] == 2||matriz[linha][coluna+3] == 2){
    printf("Rick está sendo perseguido!\n");
    if(matriz[linha-3][coluna] == 2){ matriz[linha-3][coluna] = 0; matriz[linha-2][coluna] = 2;}
    if(matriz[linha+3][coluna] == 2){ matriz[linha+3][coluna] = 0; matriz[linha+2][coluna] = 2;} 
    if(matriz[linha][coluna+3] == 2){ matriz[linha][coluna+3] = 0; matriz[linha][coluna+2] = 2;}
    if(matriz[linha][coluna-3] == 2){ matriz[linha][coluna-3] = 0; matriz[linha][coluna-2] = 2;}

    }
     }*/
     //move com duas casas
    if(matriz[linha-1][coluna] == 0||matriz[linha+1][coluna] == 0||matriz[linha][coluna-1] == 0||matriz[linha][coluna+1] == 0){
    if(matriz[linha-2][coluna] == 2||matriz[linha+2][coluna] == 2||matriz[linha][coluna-2] == 2||matriz[linha][coluna+2] == 2){
    printf("Rick está sendo perseguido!\n");
    if(matriz[linha-2][coluna] == 2){ matriz[linha-2][coluna] = 0; matriz[linha-1][coluna] = 2;}
    if(matriz[linha+2][coluna] == 2){ matriz[linha+2][coluna] = 0; matriz[linha+1][coluna] = 2;} 
    if(matriz[linha][coluna+2] == 2){ matriz[linha][coluna+2] = 0; matriz[linha][coluna+1] = 2;}
    if(matriz[linha][coluna-2] == 2){ matriz[linha][coluna-2] = 0; matriz[linha][coluna-1] = 2;}

    }
    }else{printf("zumbi ficou preso!\n");}
    
    
    printf("Rick se movimentou!\n");
    printf("Rick tem %d balas na sua arma!\n",balas);
    break;
    }
    
    


}else{printf("Rick não pode sair porai!\n"); break;}

break;
    //movimentação esquerda
case 'a':

if(coluna>0){
    //rick encontra zumbi
    if(matriz[linha][coluna-1] == 2){
        if(balas>0){ 
    matriz[linha][coluna] = 0;
    coluna--;
    matriz[linha][coluna] = 1;
    balas--;
    printf("Rick mata um zumbi!\n Restam %d balas",balas);
        
    }else{printf("Rick Morreu!"); vidaRick = 0; break;}

    break;
    }
    //rick encontra a saída
    if(matriz[linha][coluna-1] == 5){
        matriz[linha][coluna] = 0;
        coluna--;
    matriz[linha][coluna] = 1;
    printf("Rick encontrou a saida!");
    vidaRick = 2;
    break;
    }
    
    //Rick encontra balas
    if(matriz[linha][coluna-1] ==4 ){
    matriz[linha][coluna] = 0;
    coluna--;
    matriz[linha][coluna] = 1;
    printf("Rick entrou municão!\n");
    balas++;
    printf("Rick se movimentou!\n");
    printf("Rick tem %d balas na sua arma!\n",balas);
    break;
    }

    //obstaculo carro
    if(matriz[linha][coluna-1] == 3||matriz[linha][coluna-1] == 10){
        printf("Rick encontrou um carro!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha][coluna-1] = 10;

        break;
    }
    //obstaculo arvore
        if(matriz[linha][coluna-1] == 6||matriz[linha][coluna-1] == 11){
        printf("Rick encontrou uma arvore!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha][coluna-1] = 11;

        break;
        }
    //obstaculo pedras
    if(matriz[linha][coluna-1] == 7||matriz[linha][coluna-1] == 12){
        printf("Rick encontrou uma pedra!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha][coluna-1] = 12;

        break;
    }
    //movimentação padrão
    if(matriz[linha][coluna-1] !=3 &&matriz[linha][coluna-1] !=4 && matriz[linha][coluna-1] !=5 && matriz[linha][coluna-1] !=2&& matriz[linha][coluna-1] !=6&& matriz[linha][coluna-1] !=7){
    matriz[linha][coluna] = 0;
    coluna--;
    matriz[linha][coluna] = 1;
    //Movimentação Zumbi
    //passa a seguir com 3 casas
    /*if(matriz[linha-2][coluna] != 2 ||matriz[linha+2][coluna] != 2||matriz[linha][coluna-2] != 2||matriz[linha][coluna+2] != 2){
    if(matriz[linha-3][coluna] == 2||matriz[linha+3][coluna] == 2||matriz[linha][coluna-3] == 2||matriz[linha][coluna+3] == 2){
    printf("Rick está sendo perseguido!\n");
    if(matriz[linha-3][coluna] == 2){ matriz[linha-3][coluna] = 0; matriz[linha-2][coluna] = 2;}
    if(matriz[linha+3][coluna] == 2){ matriz[linha+3][coluna] = 0; matriz[linha+2][coluna] = 2;} 
    if(matriz[linha][coluna+3] == 2){ matriz[linha][coluna+3] = 0; matriz[linha][coluna+2] = 2;}
    if(matriz[linha][coluna-3] == 2){ matriz[linha][coluna-3] = 0; matriz[linha][coluna-2] = 2;}

    }
     }*/
     //passa a seguir com duas casas
    if(matriz[linha-1][coluna] == 0||matriz[linha+1][coluna] == 0||matriz[linha][coluna-1] == 0||matriz[linha][coluna+1] == 0){
    if(matriz[linha-2][coluna] == 2||matriz[linha+2][coluna] == 2||matriz[linha][coluna-2] == 2||matriz[linha][coluna+2] == 2){
    printf("Rick está sendo perseguido!\n");
    if(matriz[linha-2][coluna] == 2){ matriz[linha-2][coluna] = 0; matriz[linha-1][coluna] = 2;}
    if(matriz[linha+2][coluna] == 2){ matriz[linha+2][coluna] = 0; matriz[linha+1][coluna] = 2;} 
    if(matriz[linha][coluna+2] == 2){ matriz[linha][coluna+2] = 0; matriz[linha][coluna+1] = 2;}
    if(matriz[linha][coluna-2] == 2){ matriz[linha][coluna-2] = 0; matriz[linha][coluna-1] = 2;}

    }
    }else{printf("zumbi ficou preso!\n");}
    printf("Rick se movimentou!\n");
    printf("Rick tem %d balas na sua arma!\n",balas);
    break;
    }
    
    


}else{printf("Rick não pode sair porai!\n"); break;}

break;
    //movimentação direita
case 'd':

if(coluna<9){
    //rick encontra zumbi
    if(matriz[linha][coluna+1] == 2){
        if(balas>0){ 
    matriz[linha][coluna] = 0;
    coluna++;
    matriz[linha][coluna] = 1;
    balas--;
    printf("Rick mata um zumbi!\n Restam %d balas",balas);
        
    }else{printf("Rick Morreu!"); vidaRick = 0; break;}

    break;
    }
    //rick encontra saidas
    if(matriz[linha][coluna+1] == 5){
        matriz[linha][coluna] = 0;
        coluna++;
    matriz[linha][coluna] = 1;
    printf("Rick encontrou a saida!");
    vidaRick = 2;
    break;
    }
    //Rick encontra balas
    if(matriz[linha][coluna+1] ==4 ){
    matriz[linha][coluna] = 0;
    coluna++;
    matriz[linha][coluna] = 1;
    printf("Rick entrou municão!\n");
    balas++;
    printf("Rick se movimentou!\n");
    printf("Rick tem %d balas na sua arma!\n",balas);
    break;
    }
    
    //obstaculo carro
    if(matriz[linha][coluna+1] == 3||matriz[linha][coluna+1] == 10){
        printf("Rick encontrou um carro!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha][coluna+1] = 10;

        break;
    }
    //obstaculo arvore
        if(matriz[linha][coluna+1] == 6||matriz[linha][coluna+1] == 11){
        printf("Rick encontrou uma arvore!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha][coluna+1] = 11;

        break;
        }
    //obstaculo pedras
    if(matriz[linha][coluna+1] == 7||matriz[linha][coluna+1] == 12){
        printf("Rick encontrou uma pedra!\nRick não pode se mover.\n");
        matriz[linha][coluna] = 1;
        matriz[linha][coluna+1] = 12;

        break;
    }
    //movimentação padrão
    if(matriz[linha][coluna+1] !=3 &&matriz[linha][coluna+1] !=4 && matriz[linha][coluna+1] !=5 && matriz[linha][coluna+1] !=2&& matriz[linha][coluna+1] !=6&& matriz[linha][coluna+1] !=7){
    matriz[linha][coluna] = 0;
    coluna++;
    matriz[linha][coluna] = 1;
    //Movimentação Zumbi
    //passa a seguir com 3 casas
   /* if(matriz[linha-2][coluna] != 2 ||matriz[linha+2][coluna] != 2||matriz[linha][coluna-2] != 2||matriz[linha][coluna+2] != 2){
    if(matriz[linha-3][coluna] == 2||matriz[linha+3][coluna] == 2||matriz[linha][coluna-3] == 2||matriz[linha][coluna+3] == 2){
    printf("Rick está sendo perseguido!\n");
    if(matriz[linha-3][coluna] == 2){ matriz[linha-3][coluna] = 0; matriz[linha-2][coluna] = 2;}
    if(matriz[linha+3][coluna] == 2){ matriz[linha+3][coluna] = 0; matriz[linha+2][coluna] = 2;} 
    if(matriz[linha][coluna+3] == 2){ matriz[linha][coluna+3] = 0; matriz[linha][coluna+2] = 2;}
    if(matriz[linha][coluna-3] == 2){ matriz[linha][coluna-3] = 0; matriz[linha][coluna-2] = 2;}

    }
     }*/
     //passa a seguir com 2 casas de diferença
    if(matriz[linha-1][coluna] == 0||matriz[linha+1][coluna] == 0||matriz[linha][coluna-1] == 0||matriz[linha][coluna+1] == 0){
    if(matriz[linha-2][coluna] == 2||matriz[linha+2][coluna] == 2||matriz[linha][coluna-2] == 2||matriz[linha][coluna+2] == 2){
    printf("Rick está sendo perseguido!\n");
    if(matriz[linha-2][coluna] == 2){ matriz[linha-2][coluna] = 0; matriz[linha-1][coluna] = 2;}
    if(matriz[linha+2][coluna] == 2){ matriz[linha+2][coluna] = 0; matriz[linha+1][coluna] = 2;} 
    if(matriz[linha][coluna+2] == 2){ matriz[linha][coluna+2] = 0; matriz[linha][coluna+1] = 2;}
    if(matriz[linha][coluna-2] == 2){ matriz[linha][coluna-2] = 0; matriz[linha][coluna-1] = 2;}

    }
    }else{printf("zumbi ficou preso!\n");}
    printf("Rick se movimentou!\n");
    printf("Rick tem %d balas na sua arma!\n",balas);
    break;
    }
    
    


}else{printf("Rick não pode sair porai!\n"); break;}

break;



    
    
}
}
if(vidaRick == 2){printf("\n\nRick fugiu\n\n\nParabens voce venceu o jogo\n\n");}
if(vidaRick !=2){printf("\nVoce perdeu o jogo\n\nRick morreu\n\n");}

  return 0;
}


void limpaTela(){
    system("cls");
}