#include <stdio.h>
#include <stdlib.h>
//2- Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Ex: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.

int main(void) {
  int num;
  float soma;
  printf("\n\nSoma dos divisores de um número!\n\n");
  printf("Digite um valor:");
  scanf("%d",&num);
  for(int i = 1;i<=num;i++){
  
  if(num%i == 0 && i!=num){
  if(i>1){
  printf("+ ");}
  printf("%d ",i);
  
  soma = soma + i;

  }
  }
  printf("= |%.2f|",soma);
  return 0;
}