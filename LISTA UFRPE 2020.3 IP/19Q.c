#include <stdio.h>
#include <stdlib.h>



int main(void) {
  int opiniao;
  float somaIdade,somaRegular,somaBom,idade,n=0;
  printf("MENU:\n");
printf("1. EXELENTE\n2. BOM\n3. REGULAR\n");
  for(int i=1;i<=10;i++){
    printf("Digite a idade do %d espectador:",i);
    scanf("%f",&idade);
    printf("Selecione uma opinião:");
    scanf("%d",&opiniao);
    switch(opiniao){
      case 1:
      printf("EXELENTE!\n");
      somaIdade = somaIdade + idade;
      if(opiniao == 1){
      n++;
      }
      break;
      case 2:
      printf("BOM!\n");
      if(opiniao == 2){
      somaBom++;
      }
    
      break;
      case 3:
      printf("REGULAR!\n");
      if(opiniao == 3){
      somaRegular++;
      }
      break;
      
    }
    //A média das idades das pessoas que responderam excelente;
    if(i>=10){
    printf("A média de idade das pessoas que votaram exelente é : %.2f",somaIdade/n);
    //a quantidade de pessoas que responderam regular;
    printf("\n\nQuantidade de pessoas que responderam regular : %.2f",somaRegular);
    //a percentagem de pessoas que responderam bom entre todos os expectadores analisados
    printf("\n\nPercentagem de pessoas que responderam bom entre todos os expectadores analisados:%.2f",(somaBom*1.00)/10);
    }
    





  }

  return 0;

}