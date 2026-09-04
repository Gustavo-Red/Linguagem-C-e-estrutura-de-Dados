#include <stdio.h>
#include <string.h>

/*
 * = COMANDO strcmp =
 * O comando strcmp compara duas strings em ordem alfabética e retorna 0 se elas forem iguais,
 * um valor negativo se a primeira string vier antes da segunda,
 * e um valor positivo se a primeira string vier depois da segunda.
 *
 * OBS: Precisa da biblioteca <string.h>
 */

int main() {
    printf("%d\n", strcmp("ana", "ana"));      // 0      -> iguais
    printf("%d\n", strcmp("ana", "bruno"));    // negativo -> "ana" vem antes
    printf("%d\n", strcmp("bruno", "ana"));    // positivo -> "bruno" vem depois
    printf("%d\n", strcmp("ana", "anabela"));  // negativo -> "ana" e mais curta
    return 0;
}
