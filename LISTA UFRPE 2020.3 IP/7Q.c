#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*7- Escreva um programa que pe�a ao usu�rio 3 valores reais: r, c1 e c2. O primeiro representa o raio de uma circunfer�ncia,
e os outros dois valores representam o centro.
Pe�a para o usu�rio digitar mais dois valores reais: p1 e p2, que representam as coordenadas de um ponto.
Imprima �Estah dentro�, se o ponto (p1,p2) est� dentro da circunfer�ncia, caso contr�rio, imprima �Estah fora�.*/





void limpaTela(){
system("cls");
}


int main(void){
float r,c1,c2,p1,p2,equa;
printf("Digite o Raio:");
scanf("%f",&r);
printf("\nDigite o primeiro centro:");
scanf("%f",&c1);
printf("\nDigite o segundo centro:");
scanf("%f",&c2);
limpaTela();
printf("\nRaio:%.2f\nCentro 1:%.2f\nCentro 2:%.2f\n",r,c1,c2);
printf("Digite o primeiro ponto:");
scanf("%f",&p1);
printf("Digite o segundo ponto:");
scanf("%f",&p2);
limpaTela();
printf("\nPonto 1:%.2f\nPonto 2:%.2f\n",p1,p2);
printf("\nRaio:%.2f\nCentro 1:%.2f\nCentro 2:%.2f\n",r,c1,c2);
//equa��o da circunferencia
equa = sqrtf(powf(p1-c1,2)+powf(p2-c2,2));







if(equa>r){

printf("\nOs pontos (%.2f,%.2f) nao pertencem a circunferencia!\n",p1,p2);
}else{
printf("\nOs pontos (%.2f,%.2f) pertencem a circunferencia!\n",p1,p2);}


return 0;
}
