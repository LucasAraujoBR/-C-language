#include <stdlib.h>
#include <stdio.h>

/*6- Uma empresa deseja dar 20% de aumento para aqueles funcionários que possuem salário
menor ou igual a R$1000,00 e um aumento de 10% para aqueles
 que possuem salários maiores que R$1000,00.*/

void limpaTela(){
system("cls");
}

int main(void){

int salario,novosalario;
printf("Digite o salario:");
scanf("%d",&salario);
limpaTela();
if(salario<=1000){
    novosalario=salario*1.20;
    printf("Novo salario eh %d",novosalario);
}else{
    novosalario=salario*1.10;
printf("Novo salario eh %d",novosalario);}






return 0;
}
