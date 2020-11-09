#include <stdlib.h>
#include <stdio.h>


/*10- A nota final de um estudante é calculada a partir da média de três notas atribuídas entre o intervalo de 0 até 10,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. De acordo com o resultado,
 mostre na tela se o aluno está reprovado (média <= 4), de recuperação (4 <= media < 7) ou se foi aprovado (media >= 7).
 Se o aluno for para a recuperação, leia a sua nota na recuperação, e verifique se a média desta nota com a nota final é maior ou igual a 5.
  Se for, imprima que o mesmo está aprovado na recuperação, caso contrário imprima que o mesmo está reprovado.*/


void limpaTela();
int main(void){
float nota1,nota2,nota3,media,recuperacao,mediaFinal;
    printf("Nota do trabalho de laboratorio:");
    scanf("%f",&nota1);
    printf("\nNota da avaliacao semestral:");
    scanf("%f",&nota2);
    printf("\nNota do exame final:");
    scanf("%f",&nota3);
    limpaTela();
    media = (nota1+nota2+nota3)/3;
    if(media<=4){printf("Reprovado");}
    else if(media<7){
            printf("Recuperacao\n");
            printf("Nota da Recuperacao:");
            scanf("%f",&recuperacao);
            mediaFinal = (recuperacao+media)/2;
            if(mediaFinal>=5){printf("Aprovado na recuperacao");}
            else{printf("Reprovado");}
    }
    else{printf("Aprovado");}






return 0;
}












void limpaTela(){
system("cls");
}
