#include <stdlib.h>
#include <stdio.h>

//12.Dados dois números inteiros positivos, determinar o máximo divisor comum entre eles usando o algoritmo de Euclides.

int main(){

int anterior,atual,resto;

  printf("Digite os dois inteiros positivos: ");
  scanf("%d  %d" , &anterior, &atual);
  printf("MDC -> (%d,%d) = ", anterior, atual);

  resto = atual % anterior;
  while (resto != 0){
    resto = anterior % atual;
    anterior = atual;
    atual = resto;
  }
printf("%d\n", anterior);
return 0;
}
