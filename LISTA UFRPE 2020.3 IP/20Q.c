#include <stdio.h>
#include <stdlib.h>

//5- Dado um número inteiro positivo, verificar se o número é primo ou não. OBS: Número primo é aquele que possui apenas dois divisores, o número 1 e o próprio número.


int main(void) {
 int i, x; 
  int div = 0;
  
  do {
    system("clear");
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &x);
  } while (x <= 0);
  
  for (i = 1; i <= x; i++) {
    if (x % i == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    printf("O número %d é primo!", x);
  else
    printf("O número %d não é primo!", x);

  return 0;
}