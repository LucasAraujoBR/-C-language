#include <stdlib.h>
#include <stdio.h>

//1- Elaborar um programa em linguagem C para somar dois números inteiros e mostrar o valor da soma na tela.
// Você só deve imprimir a mensagem se a soma dos números for maior que 10.

void limpaTela(){
system("cls");
}

int main (void){
    int a,b;
    printf("Digite dois valores inteiros:");
    scanf("%d %d",&a,&b);
    limpaTela();
    if(a+b>10){
        printf("A soma dos valores %d + %d eh:%d",a,b,a+b);
    }else{
    printf("os valores nao sao maiores de 10");}




return 0;
}
