#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
double interval,absolut;
int i;

for(i = 0; i <30; i++)
{
 absolut = fabs(sin(interval));
 interval = i/10.0;
 printf("sin( %lf ) = %lf \t\n", interval, absolut);
}


printf("\n+++++++\n");
return 0;
}
