#include <stdio.h>
#include <limits.h>

int main() {

    unsigned int var1 = UINT_MAX;
    int var2 = 0;

    
    printf("Variavel var1 = %u \n", var1);
    
    var2 = var1;

    printf("Variavel var2 = %d \n", var2);

    return 0;

}