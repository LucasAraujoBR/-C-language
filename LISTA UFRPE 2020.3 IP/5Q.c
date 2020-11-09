#include <stdlib.h>
#include <stdio.h>
/*5- Escreva um programa que peça 3 notas (reais) para o usuários.
 Imprima “voce passou”, caso a média das notas seja maior ou igual a 7;
  caso contrário, imprima “voce nao passou”.*/
void limpaTela(){
system("cls");
}

int main(void){
float nota1,nota2,nota3,media;
printf("Digite a primeira nota:");
scanf("%f",&nota1);
printf("Digite a segunda nota:");
scanf("%f",&nota3);
printf("Digite a terceira nota:");
scanf("%f",&nota3);
limpaTela();
media = (nota1+nota2+nota3)/3;
if(media>=7){
printf("voce passou,sua media foi %.2f",media);
}else{printf("Voce nao passou,sua media foi %.2f",media);}


return 0;
}
