#include <stdio.h> // a biblioteca stdio.h tem as funções printf e scanf

int main(void){
    int numero_inteiro; // ocupa quatro bytes na memória
    float numero_flutuante; // ocupa quatro bytes na memória
    char caractere; // ocupa um byte na memória 
    double x; // Ocupa 8 bytes na memória e serve para ilustrar um flutuante de muitas casas
    // void; -> representa o nada

    // para criar uma string, voce terá que criar um vetor do tipo char
    char nome[10];

    scanf("%s", nome);
    printf("Olá %s\n", nome);
    printf("\n");
    return 0;
}
