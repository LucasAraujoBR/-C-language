#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*5.  Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos.
 Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia.*/

int main (){

int vetor[30],i,j,n,maior,dia;
for(i = 1;i<=30;i++){
    printf("DIA %d:",i);
    scanf("%d",&vetor[i]);
    printf("\n");
}
 for(j=1;j<=30;j++){
    if (vetor[j] > maior){
     maior = vetor[j];
     dia = j;
    }
}

printf("Dia com maior numero de vendas = %d\nQuantidade de discos vendidos = %d \n",dia,maior);







return 0;
}
