#include <stdio.h>

int main(){
    int n_aluno = 5;
    float aluno_1 = 7.5;
    float aluno_2 = 6;
    float aluno_3 = 8;
    float aluno_4 = 5.5;
    float aluno_5 = 9;
    float media;

    media = (aluno_1 + aluno_2 + aluno_3 + aluno_4 + aluno_5) / n_aluno;
    
    printf("A media dos alunos eh: %.2f\n", media);

return 0;

}