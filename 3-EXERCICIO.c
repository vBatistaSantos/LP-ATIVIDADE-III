/*
Implemente um programa que permita cadastrar contatos telefùnicos em uma agenda, utilizando vetores para armazenar os nomes e nùmeros de telefone. Permita que o usuùrio digite o cùdigo 1 para adicionar um nùmero e 2 para mostrar os nùmeros cadastrados e encerrar o software.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int i=0,j,cod,numero[200];
    char nome[200][200];

    printf("=== AGENDA TELEFONICA ===\n\n");

    do{
        printf("Informe o nome: ");
        gets(nome[i]);

        printf("Informe o numero: ");
        scanf("%i",&numero[i]);

        i++;

        printf("\nDeseja adcionar mais contatos?\n1-Sim\n2-N„o");
        scanf("%i",&cod);

        while(cod!=1&&cod!=2){
            printf("\nPorfavor, insira uma opÁ„o v·lida.\nDeseja adcionar mais contatos?\n1-Sim\n2-N„o");
            scanf("%i",&cod);
        }

        fflush(stdin);

    }while(cod!=2);

    system("cls || clear");
    printf("=== AGENDA TELEFONICA ===\n\n");
    
    for(j=0;j<i;j++){
        printf("%i|NOME: %s\n",j+1,nome[j]);
        printf("  NUMERO: %i\n\n",numero[j]);
    }

    return 0;
}