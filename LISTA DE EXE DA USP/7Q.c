#include <stdlib.h>
#include <stdio.h>
#include <math.h>


//7.  Dados n e uma seq��ncia de n n�meros inteiros, determinar a soma dos n�meros pares.

int main (){
int n,soma,i;
printf("Digite um valor:");
scanf("%d",&n);
    soma = 0;
	for (i=0; i<=n; i+=2){
		soma += i;
	}
    printf("soma dos pares da sequencia 0 ate %d eh:%d\n",n,soma);




return 0;
}
