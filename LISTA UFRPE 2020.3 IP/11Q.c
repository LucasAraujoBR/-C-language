#include <stdlib.h>
#include <stdio.h>

/*11- Fa�a um programa que mostre ao usu�rio um menu com 4 op��es de opera��es matem�ticas (+, -, /, *).
O usu�rio escolhe uma das op��es e o seu programa ent�o pede dois valores reais, realiza a opera��o e imprime o resultado na tela.*/
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
