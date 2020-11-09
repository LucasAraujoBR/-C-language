#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void)
{
float sine,cosine,interval;
float i;
for(i = 0; i <=10; i++)
{
 interval = i/10;
 printf("Sin(%.2f) = %.2f and Cos(%.2f) = %.2f\t\n", interval,sin(interval),interval,cos(interval));
}


printf("\n+++++++\n");
return 0;
}

