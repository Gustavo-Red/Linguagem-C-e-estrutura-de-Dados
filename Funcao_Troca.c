#include <stdio.h>

void troca(int *a, int *b){
    int backup = *a;
    *a = *b;
    *b = backup;
    //printf("Dentro da função \t a = %d e b = %d \n", a, b);
}

int main() {
    int a = 10, b = 22;
    printf("Main \t a = %d e b = %d \n", a, b);
    printf("Main endereços a = %p e b = %p \n", &a, &b);

    troca(&a, &b);

    printf("Após a chamada da função \t a = %d e b = %d \n", a, b);
    return 0;
}