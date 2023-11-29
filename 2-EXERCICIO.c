/*
Crie um programa que faça o cadastro de 5 alunos em uma escola, armazenando seus dados como: nome, idade e  3 notas  para cada aluno. Ao final, mostre todos os dados dos alunos como: nome, idade, as notas e a média. Após calcular a média, verifique para cada aluno se este estará aprovado (média maior ou igual a 7,0), em recuperação (média menor que 7,0 e maior ou igual a 5,0) ou reprovado (média menor que 5,0) com base nestes critérios.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int i,j, idade[5];
    char nome[5][200];
    float nota[5][3],media[3]={0,0,0};

    printf("=== INSIRA OS DADOS DOS ALUNOS ===\n\n");

    for (i=0;i<5;i++){

        printf("%iº ALUNO\n",i+1);
        printf(" Informe o nome : ");
        gets(nome[i]);
        
        printf(" Informe a idade: ");
        scanf("%i",&idade[i]);

        printf(" Notas:\n");
        for(j=0;j<3;j++){
            printf("  %iª Nota:",j+1);
            scanf("%f",&nota[i][j]);
            media[i]+=nota[i][j]/3;
        }
        printf("\n");

        fflush(stdin);
    }

    system("cls || clear");

    printf("==== INFORMAÇÕES DO ALUNO ===\n\n");

    for(i=0;i<5;i++){
        printf("NOME : %s\n",nome[i]);
        printf("IDADE: %i\n",idade[i]);
        printf("NOTAS\n");
        for(j=0;j<3;j++){
            printf("%iº TRIMESTRE: %.2f\n",j+1,nota[i][j]);
        }
        printf("MÉDIA: %.2f\n",media[i]);
        printf("RESULTADO: ");

        if(media[i]>=7){
            printf("APROVADO\n");
        }else if(media[i]>=5){
            printf("RECUPERAÇÃO\n");
        }else{
            printf("REPROVADO\n");
        }
        printf("\n");

    }

    return 0;
}