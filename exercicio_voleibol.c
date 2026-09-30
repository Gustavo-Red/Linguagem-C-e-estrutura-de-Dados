/*
 * Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe.
 * A cada jogo, seu auxiliar anota quantas tentativas de saques, bloqueios e
 * ataques cada um de seus jogadores fez, bem como quantos desses saques,
 * bloqueios e ataques tiveram sucesso (resultaram em pontos). Seu programa
 * deve mostrar qual o percentual de saques, bloqueios e ataques do time todo
 * tiveram sucesso.
 *
 * Entrada:
 *   A entrada é dada pelo número de jogadores N (1 <= N <= 100), seguido pelo
 *   nome de cada um dos jogadores. Abaixo do nome de cada jogador, seguem duas
 *   linhas com três inteiros cada. Na primeira linha S, B e A
 *   (0 <= S,B,A <= 10000) representam a quantidade de tentativas de saques,
 *   bloqueios e ataques e na segunda linha, S1, B1 e A1
 *   (0 <= S1 <= S; 0 <= B1 <= B; 0 <= A1 <= A) com o número de saques,
 *   bloqueios e ataques deste jogador que tiveram sucesso.
 *
 * Saída:
 *   A saída deve conter o percentual total de saques, bloqueios e ataques do
 *   time todo que resultaram em pontos, conforme mostrado no exemplo.
 *
 * Exemplo de Entrada:
 *   3
 *   Renan
 *   10 20 12
 *   1 10 9
 *   Jonas
 *   8 7 1
 *   2 7 0
 *   Edson
 *   3 3 3
 *   1 2 3
 *
 * Exemplo de Saída:
 *   Pontos de Saque: 19.05 %.
 *   Pontos de Bloqueio: 63.33 %.
 *   Pontos de Ataque: 75.00 %.
 */

#include <stdio.h>


int main(){
  char nome[100];
  int N, S, B, A, S1, B1, A1;
  int total_S = 0, total_B = 0, total_A = 0, total_S1 = 0, total_B1 = 0, total_A1 = 0;

  scanf("%d", &N);

for (int i = 0; i < N; i++){
  scanf("%s", nome);
  scanf("%d %d %d", &S, &B, &A);
  scanf("%d %d %d", &S1, &B1, &A1);
  total_S += S;
  total_B += B;
  total_A += A;
  total_S1 += S1;
  total_B1 += B1;
  total_A1 += A1;
}

printf("Pontos de Saque: %.2f %%.\n", (100.0*total_S1)/total_S);
printf("Pontos de Bloqueio: %.2f %%.\n", (100.0*total_B1)/total_B);
printf("Pontos de Ataque: %.2f %%.\n", (100.0*total_A1)/total_A);


return 0;
}


