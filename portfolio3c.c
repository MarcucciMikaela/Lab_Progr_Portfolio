#include <stdio.h>

int verificarTentativa(int tentativa, int numeroSecreto) {
    if (tentativa < numeroSecreto) {
        return -1;
    } else if (tentativa > numeroSecreto) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numeroSecreto = 42;
    int tentativa, chances = 0;

    printf("== Jogo de Adivinhacao ==\n");

    while (1) {
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);
        chances++;

        int resultado = verificarTentativa(tentativa, numeroSecreto);

        if (resultado == 0) {
            printf("Parabens! Voce acertou em %d tentativa%s.\n", chances, chances == 1 ? "" : "s");
            break;
        } else if (resultado == -1) {
            printf("Muito baixo!\n");
        } else {
            printf("Muito alto!\n");
        }
    }

    return 0;
}