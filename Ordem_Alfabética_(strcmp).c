#include <stdio.h>
#include <string.h>

int main() {
    char nome01[20];
    char nome02[20];

    printf("Digite um nome: \n");
    scanf("%s", nome01);

    printf("Digite outro nome: \n");
    scanf("%s", nome02);

    if (strcmp(nome01, nome02) <= -1) {
        printf("%s vem antes de %s.\n", nome01, nome02);
    } else if (strcmp(nome01, nome02) >= 1) {
        printf("%s vem antes de %s.\n", nome02, nome01);
    } else {
        printf("Os nomes são iguais.\n");
    }

    return 0;
}
