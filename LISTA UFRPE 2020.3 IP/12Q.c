#include <stdlib.h>
#include <stdio.h>

/*12- Pe�a tr�s valores ao usu�rios, A, B, C, e verifique se eles podem ser valores dos lados de um tri�ngulo.
Para ser tri�ngulo, (A+B) > C e (A+C) > B e (B+C) > A.Se n�o puder ser tri�ngulo,
 imprima na tela que �nao pode ser triangulo�; caso contr�rio,
  imprima na tela qual � o tri�ngulo formado: escaleno (todos os lados diferentes),
 is�sceles (2 lados iguais e 1 diferente) ou equil�tero (3 lados iguais).*/

void limpaTela();


int main(void){
    int a,b,c;
printf("Digite um valor:");
scanf("%d",&a);
printf("Digite um valor:");
scanf("%d",&b);
printf("Digite um valor:");
scanf("%d",&c);
limpaTela();
if((a+b)>c && (a+c)>b && (b+c)>a){
    printf("Pode ser triangulo!\n");
    if(a!=b && b!=c){printf("Triangulo escaleno!");}
    else if(a==b && a!=c || b==c && b!=a || c==a && c!=b){printf("Triangulo isosceles");}
    else{printf("Triangulo equilatero");}
}else{printf("Nao pode ser triangulo!");}






return 0;
}










void limpaTela(){
system("cls");
}
