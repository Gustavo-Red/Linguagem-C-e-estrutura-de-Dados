#include <stdio.h>

int main() {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);

    printf("Ola, %s", nome);

    return 0;
}
