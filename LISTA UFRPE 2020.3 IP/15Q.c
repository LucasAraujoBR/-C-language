#include <stdio.h>
#include <stdlib.h>
/*Uma vez direcionado ao menu escolhido, o usuário pode escolher a bebida que deseja e a quantidade. Se a quantidade for menor que 1, o sistema deve imprimir “quantidade inválida”. Se a quantidade for válida, ou seja, maior ou igual a 1, caso o usuário compre mais de 5 bebidas, receber desconto de 10%. Se comprar mais de 50 bebidas, o desconto é de 30%. Acima de 100 bebidas o desconto é de 35%.
O sistema deve imprimir na tela a bebida comprada, a quantidade e o valor final a ser pago.*/

int main(void) {
  int idade,opcao,codigo,quantidade;
  float valorTotal;
  printf("Digite sua idade:");
  scanf("%d",&idade);
  if(idade<18){
    printf("Você é menor e não pode comprar bebidas!");
  }else{
    printf("\nMenu:\n1. Whisky\n2. Vodka\n3. Cerveja\n4. Cachaça\n");
    printf("Opção:");
    scanf("%d",&opcao);
    if(opcao<1 || opcao>4){
      printf("\nOpção inválida!\n");
    }else{
      switch(opcao){
        case 1:
        printf("\nCódigo\tNome\tPreço\n100\t\tWhisky 1\t200\n101\t\tWhisky 2\t150\n102\t\tWhisky 3\t140\n");
        scanf("Opção:");
        scanf("%d",&codigo);
        switch(codigo){
          case 100:
          printf("Você selecionou Whisky 1!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 200 * quantidade;
            if(quantidade>5){valorTotal = (200 - (200 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (200 - (200 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (200 - (200 * 0.35))*quantidade;}
            printf("Whisky 1,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal);
          
          }
          break;
          case 101:
          printf("Você selecionou Whisky 2!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 150 * quantidade;
            if(quantidade>5){valorTotal = (150 - (150 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (150 - (150 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (150 - (150 * 0.35))*quantidade;}
            printf("Whisky 2,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal); 
          }
          break;
          case 102:
          printf("Você selecionou Whisky 3!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 140 * quantidade;
            if(quantidade>5){valorTotal = (140 - (140 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (140 - (140 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (140 - (140 * 0.35))*quantidade;}
            printf("Whisky 3,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal); 
          }
          break;


        }
        break;
      case 2:
        printf("\nCódigo\tNome\tPreço\n200\t\tVodka 1\t60\n201\t\tVodka 2\t40\n202\t\tVodka 3\t30\n");
        scanf("Opção:");
        scanf("%d",&codigo);
        switch(codigo){
          case 200:
          printf("Você selecionou Vodka 1!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 60 * quantidade;
            if(quantidade>5){valorTotal = (60 - (60 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (60 - (60 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (60 - (60 * 0.35))*quantidade;}
            printf("Vodka 1,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal);
          
          }
          break;
          case 201:
          printf("Você selecionou Vodka 2!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 40 * quantidade;
            if(quantidade>5){valorTotal = (40 - (40 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (40 - (40 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (40 - (40 * 0.35))*quantidade;}
            printf("Vodka 2,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal); 
          }
          break;
          case 202:
          printf("Você selecionou Vodka 3!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 30 * quantidade;
            if(quantidade>5){valorTotal = (30 - (30 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (30 - (30 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (30 - (30 * 0.35))*quantidade;}
            printf("Vodka 3,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal); 
          }
          break;


        }
        break;
        case 3:
        printf("\nCódigo\tNome\tPreço\n300\t\tCerveja 1\t1.50\n301\t\tCerveja 2\t2.0\n302\t\tCerveja 3\t3.0\n");
        scanf("Opção:");
        scanf("%d",&codigo);
        switch(codigo){
          case 300:
          printf("Você selecionou Cerveja 1!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 1.50 * quantidade;
            if(quantidade>5){valorTotal = (1.50 - (1.50 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (1.50 - (1.50 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (1.50 - (1.50 * 0.35))*quantidade;}
            printf("Cerveja 1,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal);
          
          }
          break;
          case 301:
          printf("Você selecionou Cerveja 2!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 2 * quantidade;
            if(quantidade>5){valorTotal = (2 - (2 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (2 - (2 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (2 - (2 * 0.35))*quantidade;}
            printf("Cerveja 2,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal); 
          }
          break;
          case 302:
          printf("Você selecionou Cerveja 3!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 3 * quantidade;
            if(quantidade>5){valorTotal = (3 - (3 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (3 - (3 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (3 - (3 * 0.35))*quantidade;}
            printf("Cerveja 3,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal); 
          }
          break;


        }
        break;
        case 4:
        printf("\nCódigo\tNome\tPreço\n400\t\tCachaça 1\t8.00\n401\t\tCachaça 2\t20.0\n402\t\tCachaça 3\t22.0\n");
        scanf("Opção:");
        scanf("%d",&codigo);
        switch(codigo){
          case 400:
          printf("Você selecionou Cachaça 1!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 8.00 * quantidade;
            if(quantidade>5){valorTotal = (8.00 - (8.00 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (8.00 - (8.00 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (8.00 - (8.00 * 0.35))*quantidade;}
            printf("Cachaça 1,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal);
          
          }
          break;
          case 401:
          printf("Você selecionou Cachaça 2!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 20 * quantidade;
            if(quantidade>5){valorTotal = (20 - (20 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (20 - (20 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (20 - (20 * 0.35))*quantidade;}
            printf("Cachaça 2,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal); 
          }
          break;
          case 402:
          printf("Você selecionou Cachaça 3!\nDigite a quantidade desejada:");
          scanf("%d",&quantidade);
          if(quantidade<1){printf("Quantidade inválida!\n");}
          else{
            valorTotal = 22 * quantidade;
            if(quantidade>5){valorTotal = (22 - (22 * 0.1))*quantidade;}
            else if(quantidade>50){valorTotal = (22 - (22 * 0.3))*quantidade;}
            else if(quantidade>100){valorTotal = (22 - (22 * 0.35))*quantidade;}
            printf("Cachaça 3,quantidade:|%d| e valor total:|%.2f|",quantidade,valorTotal); 
          }
          break;


        }
        break;

      }
    }

  }
  return 0;
}