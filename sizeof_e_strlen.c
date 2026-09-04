#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char str[] = "Hello";

    printf("%s \n", str);
    printf("Tamanho com sizeof = %ld \n", sizeof(str));
    printf("Tamanho com strlen = %ld\n", strlen(str));

    return 0;
}