#include <stdlib.h>
#include <stdio.h>

//8.  Dado um inteiro não-negativo n, determinar n!



int main (){
int n,fatorial = 1,i;
printf("----Calculo de fatorial----\n");
printf("Digite um valor inteiro nao-negativo:");
scanf("%d",&n);
if(n >= 0){
for(i=2;i<=n;i++){
    fatorial = fatorial*i;
}
printf("O fatorial de %d eh:%d",n,fatorial);

}else{printf("Valor invalido\n");}
while(n <=0){
    int n,fatorial = 1,i;
printf("----Calculo de fatorial----\n");
printf("Digite um valor inteiro nao-negativo:");
scanf("%d",&n);
if(n >= 0){
for(i=2;i<=n;i++){
    fatorial = fatorial*i;
}
printf("O fatorial de %d eh:%d",n,fatorial);

}else{printf("Valor invalido\n");}
break;
}



return 0;
}
