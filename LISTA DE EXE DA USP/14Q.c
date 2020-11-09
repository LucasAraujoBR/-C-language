#include <stdlib.h>
#include <stdio.h>

/*14.  Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de coelhos
(1) através de uma seqüência de números naturais que passou a ser conhecida como seqüência de Fibonacci (2).
O n-ésimo número da seqüência de Fibonacci Fn é dado pela seguinte fórmula de recorrência:
Faça um programa que, dado n, calcula Fn.*/

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
