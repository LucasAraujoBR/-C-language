#include <stdio.h>
#include <stdlib.h>




//11.  Dado um inteiro positivo n, verificar se n é primo.

int main (){
int n,divisor,cont;
printf("Digite um valor e descubra se ele eh primo:");
scanf("%d",&n);
cont = 0;
  for(divisor=1;divisor<=n;divisor++)
    {
      if (n % divisor == 0)
	{
	  cont++;
	}
    }
  if (cont == 2)
    {
      printf("O valor |%d| eh primo.\n",n);
    }
  else
    {
      printf("O valor |%d| nao eh primo.\n",n);
    }







return 0;
}
