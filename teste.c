#include <stdio.h>
#include <math.h>

double log10_fatorial(long n) {
    double soma = 0.0;
    for (long i = 1; i <= n; i++) {
        soma += log10((double) i);
    }
    return soma;
}

void formata_grande(double log10_valor, char *saida) {
    if (log10_valor < 15.0) {
        sprintf(saida, "%.0f", pow(10, log10_valor));
    } else {
        sprintf(saida, "≈10^%.1f", log10_valor);
    }
}

int main(void) {
    long ns[] = {1, 10, 100, 1000, 10000};
    int qtd = 5;

    FILE *arquivo = fopen("tabela.csv", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "n;O(1);O(log n);O(n);O(n.log n);O(n^2);O(2^n);O(n!)\n");

    // cabeçalho na tela
    printf("%-8s%-8s%-10s%-10s%-14s%-14s%-14s%-14s\n",
           "n", "O(1)", "O(log n)", "O(n)", "O(n.log n)", "O(n^2)", "O(2^n)", "O(n!)");

    for (int i = 0; i < qtd; i++) {
        long n = ns[i];

        double o1 = 1;
        double ologn = (n > 0) ? log2((double) n) : 0;
        double on = n;
        double onlogn = (n > 0) ? n * log2((double) n) : 0;
        double on2 = (double) n * n;

        char buf_2n[64];
        char buf_fat[64];
        formata_grande(n * log10(2.0), buf_2n);
        formata_grande(log10_fatorial(n), buf_fat);

        fprintf(arquivo, "%ld;%.0f;%.2f;%.0f;%.2f;%.0f;%s;%s\n",
                n, o1, ologn, on, onlogn, on2, buf_2n, buf_fat);

        // mesma linha, agora na tela
        printf("%-8ld%-8.0f%-10.2f%-10.0f%-14.2f%-14.0f%-14s%-14s\n",
               n, o1, ologn, on, onlogn, on2, buf_2n, buf_fat);
    }

    fclose(arquivo);
    printf("\ntabela.csv gerado com sucesso.\n");
    return 0;
}