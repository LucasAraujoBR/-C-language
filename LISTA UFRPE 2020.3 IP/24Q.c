#include <stdio.h>
#include <stdlib.h>
/*9- Criar um programa que apresenta o seguinte menu:
BOAS VINDAS:
1– Imprimir “Olá!”;
2– Imprimir “Bem vindo!”;
3– Sair do algoritmo;
Se o usuário digitar a opção 1 ou 2, a respectiva mensagem é impressa. Em seguida, o menu é impresso novamente para que o usuário faça uma nova escolha. O programa só é encerrado quando o usuário digitar 3 para sair.*/


int main(void) {
  int opcao;
  while(opcao != 3){
  printf("Menu:\n");
  printf("BOAS VINDAS:");
  printf("\n1- Imprime Olá!\n");
  printf("2- Imprime Bem vindo!\n");
  printf("3- Sair do algoritmo\n");
  printf("Digite uma opção:");
  scanf("%d",&opcao);
  switch(opcao){
    case 1:
    printf("Olá!\n");
    break;
    case 2:
    printf("Bem vindo!\n");
    break;
    case 3:
    printf("Você saiu do sistema!\n");
    break;
    default: break;
  }
  }

  return 0;
}