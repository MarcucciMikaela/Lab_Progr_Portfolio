#include <stdio.h>

float calcularMedia(float *notas, int n_alunos) {
    float soma = 0;
    for (int i = 0; i < n_alunos; i++) {
        soma += *(notas + i);
    }
    return soma / n_alunos;
}

int main() {
    int n_alunos = 5;
    float notas[n_alunos];
    float media;

    for (int i = 0; i < n_alunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = calcularMedia(notas, n_alunos);
    printf("Média das notas: %.1f\n", media);

    for (int i = 0; i < n_alunos; i++) {
        if (notas[i] >= media) {
            printf("Aluno %d: Aprovado\n", i + 1);
        } else {
            printf("Aluno %d: Reprovado\n", i + 1);
        }
    }
    return 0;
}
