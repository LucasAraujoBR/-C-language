#include <stdlib.h>
#include <stdio.h>
/*9- Depois da libera��o do governo para as mensalidades dos planos de sa�de, as pessoas come�aram a fazer pesquisas para descobrir um bom plano, n�o muito caro. Um vendedor de plano de sa�de apresentou a tabela a seguir.
� At� 10 anos � R$30,00
� Acima de 10 at� 29 anos � R$60,00
� Acima de 29 at� 45 anos � R$120,00
� Acima de 45 at� 59 anos � R$150,00
� Acima de 59 at� 65 anos � R$250,00
� Maior que 65 anos � R$400,00
Criar um algoritmo que entre com a idade de uma pessoa e imprimir o valor que ela dever� pagar.*/






void limpaTela();


int main(void){
int idade;
printf("Digite a idade:");
scanf("%d",&idade);
limpaTela();
if(idade>=0){
        if(idade<=10){printf("VOCE DEVERA PAGAR R$30,00");}
        else if(idade>10 && idade<=29){printf("VOCE DEVERA PAGAR R$60,00");}
        else if(idade>29 && idade<=45){printf("VOCE DEVERA PAGAR R$120,00");}
        else if(idade>45 && idade<=59){printf("VOCE DEVERA PAGAR R$150,00");}
        else if(idade>59 && idade<=65){printf("VOCE DEVERA PAGAR R$250,00");}
        else{printf("VOCE DEVERA PAGAR R$400,00");}

}
else{printf("Idade invalida!\n");}

while(idade<0){
int idade;
printf("Digite a idade:");
scanf("%d",&idade);
limpaTela();
if(idade>=0){
        if(idade<=10){printf("VOCE DEVERA PAGAR R$30,00");}
        else if(idade>10 && idade<=29){printf("VOCE DEVERA PAGAR R$60,00");}
        else if(idade>29 && idade<=45){printf("VOCE DEVERA PAGAR R$120,00");}
        else if(idade>45 && idade<=59){printf("VOCE DEVERA PAGAR R$150,00");}
        else if(idade>59 && idade<=65){printf("VOCE DEVERA PAGAR R$250,00");}
        else{printf("VOCE DEVERA PAGAR R$400,00");}
        break;
}else{printf("Idade invalida!\n");}

}





return 0;
}
















void limpaTela(){
system("cls");
}
