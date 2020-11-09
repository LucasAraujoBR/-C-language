#include <stdlib.h>
#include <stdio.h>
//3.  Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.Exemplo: Para n=4 a saída deverá ser 1,3,5,7.
int main(){
int n,i,impar=1;
printf("Digite um valor:");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("%d ",impar);
impar = impar +2;
}




return 0;
}
