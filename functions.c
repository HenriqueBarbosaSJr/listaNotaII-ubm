#include <stdio.h>
#include <stdlib.h>

int soma();
int val1,val2;
int main(){
    printf("Digite um valor 1  = ");
    scanf("%i",&val1);
    printf("Digite um valor 2 = ");
    scanf("%i",&val2);
    int valor = soma(val1,val2);
    printf ("E resultdo do retorno da função = %i \n",valor);

    return 0;
}

int soma(int numA, int numB){
    printf("Estou realizando uma soma. \n");
    int result = numA + numB;
    return result;
}