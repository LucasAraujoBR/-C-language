#include <stdlib.h>
#include <stdio.h>
/*8- Um hotel cobra R$50,00 reais a diária e mais uma taxa de serviços. A taxa de serviços é de:
• 15,30 por dia, se número de diárias <15
• 10,00 por dia, se número de diárias =15
• 8,50 por dia, se número de diárias >15
Faça um programa que lê a quantidade de dias que o hóspede ficou no hotel e imprime o valor total a pagar.*/


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
