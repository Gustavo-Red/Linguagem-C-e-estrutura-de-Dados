
/*
 * Ler um número inteiro N e calcular todos os seus divisores.
 *
 * Entrada:
 *   O arquivo de entrada contém um valor inteiro.
 *
 * Saída:
 *   Escreva todos os divisores positivos de N, um valor por linha.
 *
 * Exemplo de Entrada:
 *   6
 *
 * Exemplo de Saída:
 *   1
 *   2
 *   3
 *   6
 */
#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        if (N%i == 0){
            printf("%d\n", i);
        }
    }
 
    return 0;
}
