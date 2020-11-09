#include <stdlib.h>
#include <stdio.h>
//10.  Dizemos que um n�mero natural � triangular se ele � produto de tr�s n�meros naturais consecutivos.
//Exemplo: 120 � triangular, pois 4.5.6 = 120. Dado um inteiro n�o-negativo n, verificar se n � triangular.

int main (){
int n,i;
printf("Digite um valor para N:");
scanf("%d",&n);
for(i=0;i*(i+1)*(i+2)<n;i++);
if (i*(i+1)*(i+2) == n){
printf("%d eh triangular",n);
}else{printf("%d nao eh triangular",n);}






return 0;

}
