#include <stdio.h>

int main(){
    int numero1, numero2, soma;

    printf("Insira o primeiro numero:\n");
    scanf("%d", &numero1);
    printf("Insira o segundo numero:\n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("A soma de %d e %d eh = %d\n", numero1, numero2, soma);
    
return 0;    
}