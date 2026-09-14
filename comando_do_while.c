//OBS: O comando 'do while' é muito usado em validação de entrada,você quer garantir que o usuário digite algo válido, pedindo de novo enquanto o valor estiver errado, mas precisa pedir pelo menos uma vez antes de checar.




#include <stdio.h>

int main(){
  int numero;

  do {
  printf("Digite um numero positivo: ");
  scanf("%d", &numero);
  } while (numero <= 0);

  printf("Voce digitou %d \n", numero);



  return 0;
}
