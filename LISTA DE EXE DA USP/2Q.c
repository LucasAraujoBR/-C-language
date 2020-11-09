#include <stdlib.h>
#include <stdio.h>

//2.  Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.
int main (){

int n,i,soma=0;
printf("Digite um valor:");
scanf("%d",&n);

for(i=0;i<=n;i++){
     soma = soma + i;
}
 printf("A soma dos %d primeiros inteiros positivos eh %d\n", n, soma);


return 0;
}
