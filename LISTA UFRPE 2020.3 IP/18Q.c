#include <stdio.h>
#include <stdlib.h>
/*3- A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber: 
a) média do salário da população;
b) média do número de filhos;
c) maior e menor salário;
d) percentual de habitantes com mais de 2 filhos.*/



int main(void) {
  float salario,soma,media,numero_de_filhos,soma_filhos,habitantes,maiorSalario,menorSalario=10000000000,hab2f;
  printf("Digite o número de habitantes da cidade:");
  scanf("%f",&habitantes);
  //a) média do salário da população;
  for(int i=1;i<=habitantes;i++){
    printf("Digite o salário do %d habitante:",i);
    scanf("%f",&salario);
    getchar();
    soma = soma + salario;
    if(maiorSalario<salario){maiorSalario = salario;}
    if(menorSalario>salario){menorSalario = salario;}
  }
  media = soma / habitantes;
  printf("\nA média do salário da população de %.2f habitantes é = |%.2f|\n",habitantes,media);
 // c) maior e menor salário;
printf("\nMaior salário = |%2.f| e Menor salário = |%2.f|\n\n",maiorSalario,menorSalario);

  //b) média do número de filhos;
  
for(int i=1;i<=habitantes;i++){
    printf("Digite o número de filhos do %d habitante:",i);
    scanf("%f",&numero_de_filhos);
    getchar();
    soma_filhos = soma_filhos + numero_de_filhos;
    if(numero_de_filhos == 2){hab2f++;}
  }
  media = soma_filhos / habitantes;
  printf("\nA média de filhos da população de %.2f habitantes é = |%.2f|\n",habitantes,media);
  //d) percentual de habitantes com mais de 2 filhos.
  printf("\nPercentural de Habitantes com mais de 2 filhos = |%.2f Porcento|\n",(hab2f*1.00)/habitantes);
