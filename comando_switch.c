#include <stdio.h>

int main(){
  int dia;
  printf("Digite um numero inteiro, de 1 a 7, que represente um dia da semana: \n");
  scanf("%d", &dia);

  switch (dia) {  //OBS: Só dá para usar o switch com valores constantes. 
    case 1:
    printf("Domingo \n");
    break;

    case 2:
    printf("Segunda \n");
    break;

    case 3:
    printf("Terça \n");
    break;

    case 4:
    printf("Quarta \n");
    break;

    case 5:
    printf("Quinta \n");
    break;

    case 6:
    printf("Sexta \n");
    break;

    case 7:
    printf("Domingo \n");
    break;

  }

  return 0;
}
