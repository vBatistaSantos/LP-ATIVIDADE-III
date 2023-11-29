/*
Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

- Mostre as informações solicitadas de cada pessoa e informe:
A maior altura e a menor altura.
O maior peso e menor peso;
A maior idade e a menor idade.

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int i, idade[5],maiorIdade,menorIdade;
    char nome[5][200];
    float peso[5],altura[5],maiorPeso,menorPeso,maiorAltura,menorAltura;

    for (i=0;i<5;i++){

        printf("===%iª PESSOA===\n",i+1);
        printf("  Informe o nome  : ");
        gets(nome[i]);
        
        printf("  Informe a idade : ");
        scanf("%i",&idade[i]);

        printf("  Informe o peso  : ");
        scanf("%f",&peso[i]);

        printf("  Informe a altura: ");
        scanf("%f",&altura[i]);
        
        printf("\n");

        if(i==0){
            menorAltura =maiorAltura= altura[i];
            menorIdade =maiorIdade= idade[i];
            menorPeso=maiorPeso= peso[i];
        }else{
            menorAltura = altura[i]<menorAltura?altura[i]:menorAltura;
            maiorAltura = altura[i]>maiorAltura?altura[i]:maiorAltura;
            
            menorPeso = peso[i]<menorPeso?peso[i]:menorPeso;
            maiorPeso = peso[i]>maiorPeso?peso[i]:maiorPeso;
            
            menorIdade = idade[i]<menorIdade?idade[i]:menorIdade;
            maiorIdade= idade[i]>maiorIdade?idade[i]:maiorIdade;
        }

        fflush(stdin);

    }

    system("cls || clear");

    for(i=0;i<5;i++){
        printf(">%iª PESSOA\n",i+1);
        printf("  NOME  : %s\n",nome[i]);
        printf("  IDADE : %i\n",idade[i]);
        printf("  PESO  : %.2f kg\n",peso[i]);
        printf("  ALTURA: %.2f m\n\n",altura[i]);
    }

    printf("MAIOR IDADE : %i       | MENOR IDADE : %i\n",maiorIdade,menorIdade);
    printf("MAIOR PESO  : %.2f kg | MENOR PESO  : %.2f kg\n",maiorPeso,menorPeso);
    printf("MAIOR ALTURA: %.2f m   | MENOR ALTURA: %.2f m\n",maiorAltura,menorAltura);

    return 0;
}