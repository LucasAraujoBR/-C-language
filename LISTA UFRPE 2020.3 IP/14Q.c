#include <stdio.h>
#include <stdlib.h>
/*Implemente um programa que leia o código do item pedido, a quantidade que deseja comprar e, calcule e imprima o valor a ser pago por aquele lanche.*/

void limpaTela();

int main(void) {
  int quantidade,codigo;
  float valorPago;
  printf("\nMENU:\nESPECIFICAÇÃO\tCÓDIGO\tPREÇO\nCACHORRO QUENTE\t100\t\t1.20\nBAURU SIMPLES\t101\t\t1.30\nBAURU COM OVO\t102\t\t1.50\nHAMBURGER\t\t103\t\t1.20\nCHEESEBURGUER\t104\t\t1.30\nREFRIGERANTE\t105\t\t1.00\n");
  printf("CÓDIGO:");
  scanf("%d",&codigo);
  limpaTela();
  if(codigo == 100 || codigo == 101 ||codigo == 102||codigo == 103||codigo == 104||codigo == 105){
  switch(codigo){
      case 100:
      printf("\nVocê selecionou cachorro quente!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.20;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      case 101:
      printf("\nVocê selecionou bauru simples!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.30;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      case 102:
      printf("\nVocê selecionou bauru com ovo!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.50;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      case 103:
      printf("\nVocê selecionou hamburguer!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.20;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      case 104:
      printf("\nVocê selecionou cheeseburguer!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.30;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      case 105:
      printf("\nVocê selecionou refrigerante!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.00;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;

  }
  }else{printf("Código Inválido!\n");}
  
  while(codigo != 100 || codigo != 101 ||codigo != 102||codigo != 103||codigo != 104||codigo != 105){
    scanf("%d",&codigo);
  if(codigo == 100 || codigo == 101 ||codigo == 102||codigo == 103||codigo == 104||codigo == 105){
  switch(codigo){
      case 100:
      printf("\nVocê selecionou cachorro quente!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.20;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      case 101:
      printf("\nVocê selecionou bauru simples!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.30;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      case 102:
      printf("\nVocê selecionou bauru com ovo!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.50;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      case 103:
      printf("\nVocê selecionou hamburguer!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.20;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      case 104:
      printf("\nVocê selecionou cheeseburguer!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.30;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      case 105:
      printf("\nVocê selecionou refrigerante!\nDigite a quantidade:");
      scanf("%d",&quantidade);
      valorPago = quantidade * 1.00;
      printf("O valor a ser pago é: %.2f",valorPago);
      break;
      

  }
  }else{printf("Código Inválido!\nPor favor insira o código correto.\n");
  printf("\nMENU:\nESPECIFICAÇÃO\tCÓDIGO\tPREÇO\nCACHORRO QUENTE\t100\t\t1.20\nBAURU SIMPLES\t101\t\t1.30\nBAURU COM OVO\t102\t\t1.50\nHAMBURGER\t\t103\t\t1.20\nCHEESEBURGUER\t104\t\t1.30\nREFRIGERANTE\t105\t\t1.00\n");
  printf("CÓDIGO:");
  }
  
  }
  return 0;
}

void limpaTela(){

  system("clear");
}