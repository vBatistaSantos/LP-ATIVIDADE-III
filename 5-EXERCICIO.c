/*
Exercício 5: 
Desenvolva um programa que registre as vendas de uma loja, armazenando os valores em um vetor e apresentando o total de vendas ao final. Considere que cada venda precisa do nome de um produto, seu preço e sua quantidade. Crie um menu onde o usuário possa digitar o número 1 para adicionar uma venda e o número 2 para sair do menu e exibir o total das vendas realizadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int i,nVendas=1,nProduto[nVendas];
    char continuar,nomeProduto[nVendas][200];
    float precoProduto[nVendas],precoTotal=0;

    do{
        printf("=====SISTEMA DE VENDAS=====\n\n");

        printf("Digite nome do produto: ");
        gets(nomeProduto[nVendas-1]);
        
        printf("Digite preço da unidade do produto: ");
        scanf("%f",&precoProduto[nVendas-1]);

        printf("Digite a quantidade do produto: ");
        scanf("%i",&nProduto[nVendas-1]);

        fflush(stdin);

        precoTotal+=precoProduto[nVendas-1]*(float)nProduto[nVendas-1];

        nVendas++;



        do{
            printf("Deseja inserir mais uma venda? (s/n)");
            scanf("%c",&continuar);
            continuar=tolower(continuar);
            fflush(stdin);
        }while(continuar!='n'&&continuar!='s');
        
        system("cls || clear");

    }while(continuar=='s');

    printf("=================CUPOM FISCAL=================\n\n");
    
    for(i=0;i<nVendas-1;i++){

        printf("%03i %s\n",i+1,nomeProduto[i]);
        printf("    %03i und  R$%07.2f       total R$%.2f\n",nProduto[i],precoProduto[i],(nProduto[i]*precoProduto[i]));
    }
    printf("\nTOTAL   R$%.2f\n",precoTotal);
    printf("\nVolte sempre!\n\n");


    return 0;
}