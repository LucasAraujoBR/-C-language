#include <stdlib.h>
#include <stdio.h>



//(MAT 89) Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.
//Exemplo: 6 é perfeito, pois 1+2+3 = 6. Dado um inteiro positivo n, verificar se n é perfeito.


int main (){

int n,cont,aux;
printf("Digite um valor para N:");
scanf("%d",&n);
aux=0;
for(cont=1;cont<n;cont++){
if(n%cont == 0){aux = aux + cont;}
}
if(n == aux){
    printf("|%d| eh perfeito",n);
}else{printf("|%d| nao eh perfeito",n);}





return 0;
}
