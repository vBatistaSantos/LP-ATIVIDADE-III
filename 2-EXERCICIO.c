/*
Crie um programa que fa�a o cadastro de 5 alunos em uma escola, armazenando seus dados como: nome, idade e  3 notas  para cada aluno. Ao final, mostre todos os dados dos alunos como: nome, idade, as notas e a m�dia. Ap�s calcular a m�dia, verifique para cada aluno se este estar� aprovado (m�dia maior ou igual a 7,0), em recupera��o (m�dia menor que 7,0 e maior ou igual a 5,0) ou reprovado (m�dia menor que 5,0) com base nestes crit�rios.
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

        printf("%i� ALUNO\n",i+1);
        printf(" Informe o nome : ");
        gets(nome[i]);
        
        printf(" Informe a idade: ");
        scanf("%i",&idade[i]);

        printf(" Notas:\n");
        for(j=0;j<3;j++){
            printf("  %i� Nota:",j+1);
            scanf("%f",&nota[i][j]);
            media[i]+=nota[i][j]/3;
        }
        printf("\n");

        fflush(stdin);
    }

    system("cls || clear");

    printf("==== INFORMA��ES DO ALUNO ===\n\n");

    for(i=0;i<5;i++){
        printf("NOME : %s\n",nome[i]);
        printf("IDADE: %i\n",idade[i]);
        printf("NOTAS\n");
        for(j=0;j<3;j++){
            printf("%i� TRIMESTRE: %.2f\n",j+1,nota[i][j]);
        }
        printf("M�DIA: %.2f\n",media[i]);
        printf("RESULTADO: ");

        if(media[i]>=7){
            printf("APROVADO\n");
        }else if(media[i]>=5){
            printf("RECUPERA��O\n");
        }else{
            printf("REPROVADO\n");
        }
        printf("\n");

    }

    return 0;
}