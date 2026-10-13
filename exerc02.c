#include <stdio.h>
#include <stdlib.h>

int matriz[2][4],l,c,somaQtdaPar;
int main(){
    for (l=0; l<2; l++){
        for (c=0;c<4;c++){
            printf("Entre com os elementos da matriz[%i][%i] = ",l,c);
            scanf("%i",&matriz[l][c]);
        }
    }

    for(l=0;l<2;l++){
        for(c=0;c<4;c++){
            if((matriz[l][c]%2) == 0){
                somaQtdaPar+=1;
            }
        }
    }
    printf("A quantidade de números pares = %i \n\n", somaQtdaPar);
    return 0;
}