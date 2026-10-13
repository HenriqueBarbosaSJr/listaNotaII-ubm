#include <stdio.h>
#include <stdlib.h>

int matriz[3][3], soma, l, c;

int main(){
    // leitura da matriz
    for (l=0; l<3;l++){
        for(c=0;c<3;c++){
            printf("Digite um elemento matriz[%i][%i]= ",l,c);
            scanf("%i",&matriz[l][c]);
        }
    }
    for(l=0; l<3;l++){
        for(c=0;c<3;c++){
            soma+=matriz[l][c];
        }
    }
    printf("A soma dos elementos da matriz = %i \n",soma);


    return 0;
}