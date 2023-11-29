/*
Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:
A quantidade de números ímpares;
A quantidade de números negativos;
O maior e o menor número;
A média de números pares;
A média de números inseridos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int i, n[5];
    int nImpar=0,nPar=0,nNegativo=0,maiorN,menorN;
    float mediaPar=0, mediaTotal=0;

    for(i=0;i<5;i++){
        printf("Informe o %iº número inteiro:",i+1);
        scanf("%i",&n[i]);

        mediaTotal+=n[i]/5;

        nNegativo += n[i]<0?1:0;

        if(n[i]%2==0){
            nPar++;
            mediaPar+=n[i];
        }else{
            nImpar++;
        }
        
        if(i==0){
            maiorN = menorN = n[i];
        }else{
            maiorN = n[i]>maiorN?n[i]:maiorN;
            menorN = n[i]<menorN?n[i]:menorN;
        }
    }

    mediaPar/=nPar;

    system("cls || clear");

    printf("NÚMERO DE IMPARES: %i\n",nImpar);
    printf("QUANTIDADE DE NÚMEROS NEGATIVOS: %i\n",nNegativo);
    printf("MAIOR: %i | MENOR%i\n",maiorN,menorN);
    printf("MÉDIA PARES: %.1f\n",mediaPar);
    printf("MÉDIA TOTAL: %.1f\n",mediaTotal);

    return 0;
}