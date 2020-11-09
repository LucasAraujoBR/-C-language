#include <stdio.h>
//1- Faça um programa que leia 10 números inteiros (positivos ou negativos). Imprima a média dos valores, ignorando os não positivos.

int main(void) {
  int num;
  float soma;
  for(int i = 1;i<=10;i++){
  printf("Digite o %d valor:",i);
  scanf("%d",&num);
  if(num>=0){
  
  soma = soma + num;

  }
  }
  printf("A média é:%.2f",soma/10);
  return 0;
}