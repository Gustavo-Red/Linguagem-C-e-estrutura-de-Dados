#include <stdio.h>

int main(){
  // %d   int (decimal)
  // %f   float
  // %lf  double (no scanf; no printf, %f também funciona pra double)
  // %c   char (um caractere)
  // %s   string (array de char)
  // %x   int em hexadecimal
  // %o   int em octal
  // %u   unsigned int
  // %p   endereço de memória (ponteiro)
  // %%   imprime o símbolo % literal
  
  int numero = 255;
  printf("Decimal: %d, Hex: %x, Octal: %o\n", numero, numero, numero);
  // Saída -> Decimal: 255, Hex: ff, Octal: 377

  printf("%5d\n", 42);    // ocupa 5 espaços, alinhado à direita:  "   42"
  printf("%-5d|\n", 42);  // alinhado à esquerda: "42   |"
  printf("%05d\n", 42);   // preenche com zeros à esquerda: "00042"
  printf("%8.2f\n", 3.5); // largura 8, 2 casas decimais: "    3.50"

return 0;
}
