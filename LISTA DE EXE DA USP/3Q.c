#include <stdlib.h>
#include <stdio.h>
//3.  Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais �mpares.Exemplo: Para n=4 a sa�da dever� ser 1,3,5,7.
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
