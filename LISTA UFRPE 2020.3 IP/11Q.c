#include <stdlib.h>
#include <stdio.h>

/*11- Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (+, -, /, *).
O usuário escolhe uma das opções e o seu programa então pede dois valores reais, realiza a operação e imprime o resultado na tela.*/
void limpaTela();

int main(void){
int a,b,c;
printf("MENU:\n1 - SOMA\n2 - SUBTRACAO\n3 - DIVISAO\n4 - MULTIPLICACAO\n");
printf("Digite sua opcao:");
scanf("%d",&a);
printf("Digite dois valores:");
scanf("%d %d",&b,&c);
limpaTela();
switch(a){
case 1:
printf("%d + %d = %d",b,c,b+c);
break;
case 2:
printf("%d - %d = %d",b,c,b-c);
break;
case 3:
printf("%d / %d = %d",b,c,b/c);
break;
case 4:
printf("%d * %d = %d",b,c,b*c);
break;
}







return 0;
}













void limpaTela(){
system("cls");
}
