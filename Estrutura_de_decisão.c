#include <stdio.h>

int main(void) {

    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    if (idade >= 18){
        printf("Você é maior de idade. \n");
    }
    else {
        printf("Você ainda é menor de idade.\n");
    }
    return 0;
}

