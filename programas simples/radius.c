#include<stdio.h>

#define PI 3.14159
int main(void)
{
 int radius;
 printf("Enter radius:");
 scanf("%d", &radius);
 // volume = (4*PI*r^3)/3
printf("volume is : %.1f \n\n", (4 * PI *radius*radius*radius)/3 );
return 0;
}
