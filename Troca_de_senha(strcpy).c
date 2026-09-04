#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];
    char nova_senha[20];

    printf("Digite sua senha para entrar no sistema:\n");
    scanf("%19s", senha);

    printf("Digite sua nova senha:\n");
    scanf("%19s", nova_senha);

    strcpy(senha, nova_senha);

    printf("Senha atualizada com sucesso! (A nova senha é %s)\n", senha);

    return 0;
}
