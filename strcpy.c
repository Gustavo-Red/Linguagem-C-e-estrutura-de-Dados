#include <stdio.h>
#include <string.h>

int main() {
    char nome1[] = "Gustavo";
    char nome2[20];

    strcpy(nome2, nome1);

    printf("%s\n", nome2);

    return 0;
}
