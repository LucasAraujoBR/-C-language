#include <stdlib.h>
#include <stdio.h>
/*13- Você está desenvolvendo um sistema de controle de acesso a cinema. Este sistema deve pedir a idade do usuário,
e em seguida imprimir as opções de filmes:
Titanic (16 anos)
Pica Pau (Livre)
A volta de Jason (18 anos)
Desistir
Se o usuário escolher o filme e não tiver idade suficiente,
o sistema deve imprimir "Voce nao tem idade para assistir ao filme".
 Caso o usuário tenha idade para o filme, o sistema imprime "Voce comprou o filme tal. Bom filme!".*/


void limpaTela();

int main(void){
int idade,filme;
printf("Digite sua idade:");
scanf("%d",&idade);
printf("\nOPCOES DE FILMES:\n1 - TITANIC (16 ANOS)\n2 - PICA PAU (LIVRE)\n3 - A VOLTA DE JASON (18 ANOS)\n4 - DESISTIR\n");
printf("SELECIONE:");
scanf("%d",&filme);
limpaTela();
switch(filme){
case 1:
    if(idade>=16)
        {
            printf("VOCE COMPROU TITANIC.BOM FILME!");
        }else{printf("VOCE NAO TEM IDADE PARA ASSISTIR AO FILME");}

    break;
case 2:
    printf("VOCE COMPROU PICA PAU.BOM FILME!");
    break;
case 3:
    if(idade>=18)
        {
            printf("VOCE COMPROU A VOLTA DE JASON.BOM FILME!");
        }else{printf("VOCE NAO TEM IDADE PARA ASSISTIR AO FILME");}
    break;

case 4:
    printf("VOCE DESISTIU!\n");
    break;

}
return 0;
}







void limpaTela(){
system("cls");
}
