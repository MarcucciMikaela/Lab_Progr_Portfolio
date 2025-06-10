#include <stdio.h> 

int main(){
    int nota;
    printf("Informe uma nota (0 a 10):");
    scanf("%d", &nota);

    if(nota >=9){
        printf("Conceito A\n");
    }else if(nota >=7){
        printf("Conceito B\n");
    }else if(nota >=5){
        printf("Conceito C\n");
    }else if(nota >=3){
        printf("Conceito D\n");
    }else{
        printf("Conceito E\n");
    }
return 0;
}