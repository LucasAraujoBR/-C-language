#include <stdlib.h>
#include <stdio.h>





//2- Escreva um programa em que uma variável recebe um valor lido entre 20 e 100.
 //Imprima na tela o valor gerado, caso seja divisível por 3 e por 5.
void limpaTela(){
system("cls");
}

int main(void){
int a;
printf("Digite um valor entre 20 e 100:");
scanf("%d",&a);
limpaTela();
if(a>=20 && a<=100 && a%3 == 0 && a%5 == 0){
    printf("o valor %d eh divisivel por 3 e por 5.",a);
}else if(a<20 && a>100){
printf("valor invalido");}else{
    if(a%3 == 0){
        printf("o valor %d eh divisivel por 3\n",a);
    }
    else if(a%5 == 0){
        printf("O valor %d eh divisivel por 5\n",a);
    }
printf("O valor %d NAO eh divisivel por 3 e por 5\n",a);}




return 0;
}
