#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*6. Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414) e suas notas da primeira prova,
determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0).*/


int main (){
int n,maior,menor,nota,i;
printf("Digite o numero de alunos:");
scanf("%d",&n);
maior = 0;
menor = 100;
for(i=1;i<=n;i++){
    printf("(Apenas notas de 0 a 100) %d Aluno:",i);
    scanf("%d",&nota);
    if(maior < nota){maior = nota;}
    if(menor > nota){menor = nota;}

}
if(maior <=100 && menor >=0){
printf("Maior nota >%d<\nMenor nota >%d<",maior,menor);}
else{printf("Nota invalida\n");}
while(maior >100 || menor <0){

    int n,maior,menor,nota,i;
printf("Digite o numero de alunos:");
scanf("%d",&n);
maior = 0;
menor = 100;
for(i=1;i<=n;i++){
    printf("(Apenas notas de 0 a 100) %d Aluno:",i);
    scanf("%d",&nota);
    if(maior < nota){maior = nota;}
    if(menor > nota){menor = nota;}

}
if(maior <=100 && menor >=0){
printf("Maior nota >%d<\nMenor nota >%d<",maior,menor);}
else{printf("Nota invalida\n");}
break;
}

return 0;
}
