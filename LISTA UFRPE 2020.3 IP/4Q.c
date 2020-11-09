#include <stdlib.h>
#include <stdio.h>

/*4- Entrar com sexo (caracter ‘m’ para masculino e ‘f’ para feminino) e idade de uma pessoa.
Se a pessoa for do sexo feminino e tiver menos de 25 anos, imprimir a mensagem:
    ACEITA. Caso contrário, imprimir a mensagem: NÃO ACEITA.*/
void limpaTela(){
system("cls");
}



int main (void){
char sexo;
int idade;
printf("Digite seu sexo [M] para masculino ou [F] para feminino");
scanf("%c",&sexo);
printf("Digite sua idade:");
scanf("%d",&idade);
limpaTela();
if(sexo == 'f' && idade<25 || sexo == 'F'&& idade<25){
    printf("ACEITA");
}else{
printf("NAO ACEITA");}






return 0;
}
