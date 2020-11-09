#include <stdio.h>
#include <stdlib.h>

//7- Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10).



int main(void) {
  int num;
  printf("Digite um valor:");
  scanf("%d",&num);
  for(int i = 1;i <= 10;i++){
    printf("%d x %d = %d\n",num,i,num*i);
  }
  return 0;
}