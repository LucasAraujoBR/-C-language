#include <stdlib.h>
#include <stdio.h>


/*10- A nota final de um estudante � calculada a partir da m�dia de tr�s notas atribu�das entre o intervalo de 0 at� 10,
respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. De acordo com o resultado,
 mostre na tela se o aluno est� reprovado (m�dia <= 4), de recupera��o (4 <= media < 7) ou se foi aprovado (media >= 7).
 Se o aluno for para a recupera��o, leia a sua nota na recupera��o, e verifique se a m�dia desta nota com a nota final � maior ou igual a 5.
  Se for, imprima que o mesmo est� aprovado na recupera��o, caso contr�rio imprima que o mesmo est� reprovado.*/


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
