#include <stdio.h>

int main(void){
    int nota;
    printf("Digite sua Nota: \n");
    scanf("%d", &nota);
    if (nota >= 9){
        printf("Nota A \n");
    }
    else if(nota >= 7){
        printf("Nota B \n");
    }
    else if(nota >= 5){
        printf("Nota C \n");
    }
    else {
        printf("Reprovado! \n");
    }
    return 0;
}