#include <stdio.h>

int main(void){
    int idade;
    int valor;
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("\nVocê tem carteira de motorista?('1' para 'Sim' e '2' para 'Não'): \n");
    scanf("%d", &valor);
    if (idade >= 18 && valor==1) {
        printf("\nVocê está autorizado a dirigir.\n");
    }
    else {
        printf("\nVocê não pode dirigir.\n");
    }
return 0;
}

