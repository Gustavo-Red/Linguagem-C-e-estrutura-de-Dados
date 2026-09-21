/*
 * Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre
 * a diferenca do produto de A e B pelo produto de C e D segundo a
 * formula: DIFERENCA = (A * B - C * D).
 *
 * Entrada:
 * O arquivo de entrada contem 4 valores inteiros.
 *
 * Saida:
 * Imprima a mensagem "DIFERENCA" com todas as letras maiusculas,
 * conforme exemplo abaixo, com um espaco em branco antes e depois
 * da igualdade.
 *
 * Exemplos de Entrada        Exemplos de Saida
 * 5                          DIFERENCA = -26
 * 6
 * 7
 * 8
 *
 * 0                          DIFERENCA = -56
 * 0
 * 7
 * 8
 *
 * 5                          DIFERENCA = 86
 * 6
 * -7
 * 8
 */

#include <stdio.h>

int main(void) {
    int A, B, C, D;
    int DIFERENCA;
    

    scanf("%d", &A);


    scanf("%d", &B);


    scanf("%d", &C);


    scanf("%d", &D);

    DIFERENCA = (A*B - C*D);

    printf("DIFERENCA = %d\n", DIFERENCA);


    return 0;
}

