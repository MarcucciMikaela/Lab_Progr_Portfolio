#include <stdio.h>

int main(){

    int idade;
    printf("Informe sua idade:");
    scanf("%d", &idade);

    if(idade <=15) {
        printf("Crianca\n");
    }else if(idade >15, idade <=30){
        printf("Jovem\n");
    }else {
        printf("Adulto\n");
    }
return 0;
}