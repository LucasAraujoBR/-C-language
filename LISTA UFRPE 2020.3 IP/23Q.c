#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um sistema de verificação do usuário. Para isso, crie uma variável inteira chamada de senha e atribua a ela um número inteiro de 4 dígitos.
O programa deve pedir ao usuário uma senha, e verificar se a senha condiz com o valor armazenado na variável senha. Se a senha digitada não estiver correta, imprima “Senha Incorreta” e solicite novamente a senha. Se a senha digitada for a correta, deverá ser apresentada a mensagem “Senha Correta”. Vale salientar que o usuário só possui 3 tentativas para acertar a senha. Caso não acerte, deve ser impresso “acesso bloqueado”.*/




int main(void) {
  int senha=1234,valor,i=0;
  do{
    i++;
  printf("Digite a senha:");
  scanf("%d",&valor);
  if(i >= 3 && valor != senha){printf("\nAcesso Bloqueado!"); break;}
  if(valor != senha){
    printf("Senha Incorreta!\n");
  }else{printf("Senha correta!\n");}
  }while(valor != senha);
  
  return 0;
}