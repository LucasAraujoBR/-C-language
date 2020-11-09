#include <stdlib.h>
#include <stdio.h>
//1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.

int main (){
int a,i;
printf("Digite um valor:");
scanf("%d",&a);
if(a>=0){
 for(i=0;i<=a;i++){
    printf("o quadrado de %d eh %d\n",i,i*i);
 }}else{
 printf("valor invalido");}







return 0;
}



