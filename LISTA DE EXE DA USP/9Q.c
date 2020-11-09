#include <stdlib.h>
#include <stdio.h>

/*9.  Dados n e dois números inteiros positivos i e j diferentes de 0,
 imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.*/


int main (){
int n,i,j,cont,aux;
printf("Digite um valor para N outro para I e mas um para J:");
scanf("%d %d %d",&n,&i,&j);
aux = 0;
cont = 0;
if(i>0 && j > 0 && n>0){
while (cont < n)
    {
      if (aux%i == 0 || aux%j == 0)
	{
	  printf("|%d| ", aux);
          cont++;
	}
      aux++;
    }
}else{printf("Valor invalido");}






return 0;
}
