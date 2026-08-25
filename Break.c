#include <stdio.h>

int main(void){
    int cont = 1;
    while (cont > 0){
        if (cont <= 5){
            printf("%d\n", cont);
            cont = cont + 1;
        }
        else {
            break;
        }
    }
    return 0;
}