#include <stdlib.h>
#include <stdio.h>
/*8- Um hotel cobra R$50,00 reais a di�ria e mais uma taxa de servi�os. A taxa de servi�os � de:
� 15,30 por dia, se n�mero de di�rias <15
� 10,00 por dia, se n�mero de di�rias =15
� 8,50 por dia, se n�mero de di�rias >15
Fa�a um programa que l� a quantidade de dias que o h�spede ficou no hotel e imprime o valor total a pagar.*/


void limpaTela();

int main (){
int dias,diaria=50;
float valorTotal;
printf("Digite o numero de dias:");
scanf("%d",&dias);
limpaTela();
if(dias<15){
    valorTotal = dias*(diaria+15.30);
    printf("\nVoce ficou %d dias, valor total a pagar:|%.1f|\n",dias,valorTotal);
}else if(dias>15){
    valorTotal = dias*(diaria+10.00);
    printf("\nVoce ficou %d dias, valor total a pagar:|%.1f|\n",dias,valorTotal);
}else{
    valorTotal = dias*(diaria+8.50);
    printf("\nVoce ficou %d dias, valor total a pagar:|%.1f|\n",dias,valorTotal);
}



return 0;
}




void limpaTela(){
system("cls");
}
