#include <stdio.h>

void analisarVetor(int *vetor, int *maior, int *menor, int *pares) {
    *maior = *vetor;
    *menor = *vetor;
    *pares = 0;

    for (int i = 0; i < 10; i++) {
        if (*(vetor + i) > *maior) {
            *maior = *(vetor + i);
        }
        if (*(vetor + i) < *menor) {
            *menor = *(vetor + i);
        }
        if (*(vetor + i) % 2 == 0) {
            (*pares)++;
        }
    }
}
int main() {
    int numeros[10];
    int maior, menor, pares;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

 analisarVetor(numeros, &maior, &menor, &pares);

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Pares: %d\n", pares);

    return 0;
}
