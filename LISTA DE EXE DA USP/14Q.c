#include <stdlib.h>
#include <stdio.h>

/*14.  Um matem�tico italiano da idade m�dia conseguiu modelar o ritmo de crescimento da popula��o de coelhos
(1) atrav�s de uma seq��ncia de n�meros naturais que passou a ser conhecida como seq��ncia de Fibonacci (2).
O n-�simo n�mero da seq��ncia de Fibonacci Fn � dado pela seguinte f�rmula de recorr�ncia:
Fa�a um programa que, dado n, calcula Fn.*/

int main (){


int n,fant, fatual, fprox,contador;
  printf("Digite um numero n: ");
  scanf("%d", &n);

  /* inicializacoes */
  fant   = 0;
  fatual = 1;
  contador = 1;

  while (contador < n) {
    fprox  = fatual + fant;  /* proximo numero de Fibonacci */
    fant   = fatual;
    fatual = fprox;
    contador = contador + 1;
  }
  printf("Numero %d de Finobacci = %d\n", n, fatual);








}
