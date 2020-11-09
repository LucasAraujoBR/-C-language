#include <stdlib.h>
#include <stdio.h>

/*12- Peça três valores ao usuários, A, B, C, e verifique se eles podem ser valores dos lados de um triângulo.
Para ser triângulo, (A+B) > C e (A+C) > B e (B+C) > A.Se não puder ser triângulo,
 imprima na tela que “nao pode ser triangulo”; caso contrário,
  imprima na tela qual é o triângulo formado: escaleno (todos os lados diferentes),
 isósceles (2 lados iguais e 1 diferente) ou equilátero (3 lados iguais).*/

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
