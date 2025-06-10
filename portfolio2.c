#include <stdio.h>
void consultarSaldo(float saldo);
void saque(float *saldo);
void deposito(float *saldo);

int main(){
    float saldo = 1000.00;
    int opcao;

    do{
    printf("Escolha a opcao!\n");
    printf("1 - Saldo\n");
    printf("2 - Saque\n");
    printf("3 - Deposito\n");
    printf("4 - Sair\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        consultarSaldo(saldo);        
    } else if(opcao ==2){
        saque (&saldo);
    } else if(opcao ==3){
        deposito(&saldo);
    } else if(opcao ==4){
        printf("Sessao encerrada!\n");
    } else {
        printf("Opcao invalida!\n");
    }
}while(opcao!=4);

}

void consultarSaldo(float saldo) {
    printf("Seu saldo atual eh de R$%f\n", saldo);
}

void saque(float *saldo) {
    float valor;
    printf("Informe o valor para saque: R$");
    scanf("%f", &valor);

    if (valor <= 0) {
        printf("Erro: o valor deve ser positivo.\n");
    } else if (valor > *saldo) {
        printf("Erro: saldo insuficiente.\n");
    } else {
        *saldo -= valor;
        printf("Saque de R$%f realizado com sucesso.\n", valor);
    }
}

void deposito(float *saldo) {
    float valor;
    printf("Informe o valor para deposito: R$");
    scanf("%f", &valor);

    if (valor <= 0) {
        printf("Erro: o valor deve ser positivo.\n");
    } else {
        *saldo += valor;
        printf("Deposito de R$%f realizado com sucesso.\n", valor);
    }
}