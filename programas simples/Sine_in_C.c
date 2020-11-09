#include <stdio.h>
#include <math.h>






/*Write a program that can give the sine of a value between 0 and 1 (non inclusive).
You will be graded based on whether the program can
output a value in the correct range and whether your code is well-formatted and logically correct.*/


int main (void){
float sine;
printf("enter a value and find your sine:")/
scanf("%f",&sine);
if(sin(sine)>=0 && sin(sine)<1){
printf("Sine value of %.2f = %.2f \n",sine,sin(sine));
}else{
printf("the value %.2f is not between 0 and 1 (not inclusive)\n",sine);}






return 0;
}
