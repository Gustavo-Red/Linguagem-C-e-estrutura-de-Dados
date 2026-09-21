/*
 * Escreva um programa que leia o numero de um funcionario, seu numero
 * de horas trabalhadas, o valor que recebe por hora e calcula o
 * salario desse funcionario. A seguir, mostre o numero e o salario do
 * funcionario, com duas casas decimais.
 *
 * Entrada:
 * O arquivo de entrada contem 2 numeros inteiros e 1 numero com duas
 * casas decimais, representando o numero, quantidade de horas
 * trabalhadas e o valor que o funcionario recebe por hora trabalhada,
 * respectivamente.
 *
 * Saida:
 * Imprima o numero e o salario do funcionario, conforme exemplo
 * fornecido, com um espaco em branco antes e depois da igualdade. No
 * caso do salario, tambem deve haver um espaco em branco apos o $.
 *
 * Exemplos de Entrada        Exemplos de Saida
 * 25                         NUMBER = 25
 * 100                        SALARY = U$ 550.00
 * 5.50
 *
 * 1                          NUMBER = 1
 * 200                        SALARY = U$ 4100.00
 * 20.50
 *
 * 6                          NUMBER = 6
 * 145                        SALARY = U$ 2254.75
 * 15.55
 */

#include <stdio.h>

int main(void) {
    int numero;
    float horas_trabalhadas;
    float valor_hora;
    float salario;

    scanf("%d", &numero);

    scanf("%f", &horas_trabalhadas);

    scanf("%f", &valor_hora);

    salario = valor_hora*horas_trabalhadas;

    printf("NUMBER = %d\n", numero);

    printf("SALARY = U$ %.2f\n", salario);


    return 0;
}
