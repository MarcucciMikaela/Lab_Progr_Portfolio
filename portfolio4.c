/* Crie um programa em linguagem C que:
Cadastre até 5 alunos, utilizando uma struct com os seguintes campos:
Nome (string)
Idade (int)
Nota final (float)
Comandos adicionados via teclado (use fgets para o nome).
Após o cadastro, o programa deve:
Exibir todos os alunos cadastrados.
Utilizar uma função para verificar e informar
Qual a média da sala.
Quantos alunos foram aprovados e reprovados.
* Aprovado (nota ≥ 6.0)
* Reprovado (nota < 6.0),
Mostrar os alunos como reprovado apresentando nota e nome.
*/

#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 5
#define TAM_NOME 50

struct Aluno {
    char nome[TAM_NOME];
    int idade;
    float notafinal;
};

float calcularmedia(struct Aluno alunos[], int quantidade) {
    float soma = 0.0;
    for (int i = 0; i < quantidade; i++) {
        soma += alunos[i].notafinal;
    }
    return soma / quantidade;
}

void verificarAprovadoseReprovados(struct Aluno alunos[], int quantidade) {
    int aprovados = 0, reprovados = 0;

    printf("Alunos Reprovados:\n");
    for (int i = 0; i < quantidade; i++) {
        if (alunos[i].notafinal >= 6.0) {
            aprovados++;
        } else {
            reprovados++;
            printf("Nome: %snota: %.2f\n", alunos[i].nome, alunos[i].notafinal);
        }
    }

    printf("Total de aprovados: %d\n", aprovados);
    printf("Total de reprovados: %d\n", reprovados);
}

int main() {
    struct Aluno alunos[MAX_ALUNOS];
    int quantidade = 0;

    printf("Cadastro de Alunos (Max %d alunos)\n\n", MAX_ALUNOS);

    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Cadastro do aluno %d\n", i + 1);
        
        printf("Nome: ");
        fgets(alunos[i].nome, TAM_NOME, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Nota Final: ");
        scanf("%f", &alunos[i].notafinal);

        getchar();

        quantidade++;
        printf("\n");
    }

    printf("\n--- Lista de Alunos Cadastrados ---\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota Final: %.2f\n", alunos[i].notafinal);
        printf("\n");
    }

    float media = calcularmedia(alunos, quantidade);
    printf("Media da sala: %.2f\n", media);

    verificarAprovadoseReprovados(alunos, quantidade);

    return 0;
}