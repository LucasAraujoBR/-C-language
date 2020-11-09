#include <stdlib.h>
#include <stdio.h>

//3- Faça um programa que lê 2 valores A e B (inteiros) e informa se A é divisível por B ou não.



int main(void){
int a,b;
printf("Digite dois valores:");
scanf("%d %d",&a,&b);
if(a%b == 0){
   printf("%d eh divisivel por %d",a,b);
   }else{
   printf("%d NAO eh divisivel por %d",a,b);}




return 0;
}
