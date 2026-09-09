#include <stdio.h>

int main() {

    int numeros[5] = {10, 20, 30, 40, 50};

    printf("%d\n", numeros[0]);
    printf("%d\n", numeros[2]);

    printf("Elementos da lista:\n");
    for (int i = 0; i < 5; i++) {
        printf("-> %d\n", numeros[i]);
    }

    return 0;
}
