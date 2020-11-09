#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//4.  Dados um inteiro x e um inteiro não-negativo n, calcular x n.

int main (){
int x,n;
printf("\n---------Calculo de potenciacao X^N---------\n");
printf("Digite um valor para X e um valor para N:");
scanf("%d %d",&x,&n);
if(n>=0){
printf("\n%d elevado a %d eh: %.1f\n",x,n,pow(x,n));
}else{printf("%d nao eh um inteiro nao-negativo\n",n);}

return 0;
}
