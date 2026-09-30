# Linguagem C e Estrutura de Dados

Registro dos meus estudos de linguagem C durante a graduação em Ciência da Computação na UFMT (Campus Universitário do Araguaia). Aqui ficam exercícios da faculdade, exercícios de juízes online e pequenos programas de teste que escrevo para entender como a linguagem funciona.

O objetivo é documentar minha evolução, dos primeiros programas até a implementação de estruturas de dados, e ter um material de revisão organizado.

## Como executar

Os programas são independentes: cada arquivo tem sua própria função `main`. Para compilar e executar qualquer um deles:

```bash
gcc nome_do_arquivo.c -o programa
./programa
```

Programas que usam `math.h` precisam da flag `-lm`:

```bash
gcc tabela_complexidade.c -o tabela -lm
```

Ambiente utilizado: Linux, GCC e Git.

## Conteúdo

As pastas seguem a ordem em que os assuntos foram estudados.

### 01 - Fundamentos

Estrutura de um programa em C, tipos de dados, quanto cada tipo ocupa na memória e o que acontece quando um valor não cabe no tipo.

| Arquivo | Assunto |
|---|---|
| `esqueleto_de_um_programa_em_c.c` | Estrutura mínima de um programa: `#include` e `main()` |
| `ola_mundo.c` | Primeiro programa |
| `declaracao_de_variaveis.c` | Principais tipos: `int`, `float`, `double`, `char` |
| `tipos_de_variaveis.c` | Tamanho dos tipos na memória e strings como vetor de `char` |
| `testando_bytes01.c` | Atribuição de `int` para `char` e perda dos bytes excedentes |
| `testando_bytes02.c` | `unsigned int` e estouro ao atribuir para `int` |
| `testando_bytes03.c` | Limites do `int` com `INT_MIN` e `INT_MAX` |

### 02 - Entrada e saída

`printf`, `scanf`, `fgets`, especificadores de formato e o problema do `\n` que fica no buffer de entrada.

| Arquivo | Assunto |
|---|---|
| `comando_printf.c` | Uso básico do `printf` |
| `comando_scanf.c` | Uso básico do `scanf` e o operador `&` |
| `especificadores_de_formato.c` | `%d`, `%f`, `%x`, `%o`, largura de campo e alinhamento |
| `diagnostico_buffer_scanf.c` | Por que `scanf(" %c")` precisa do espaço antes do `%c` |
| `comandos_scanf_e_fgets.c` | Lendo textos com espaços usando `fgets` |
| `nome_completo.c` | Leitura de nome completo |
| `exercicio_cadastro_simples.c` | Cadastro com nome, idade e gênero |
| `exercicio_formatacao_de_tabela.c` | Tabela alinhada com largura de campo |

### 03 - Operações aritméticas

| Arquivo | Assunto |
|---|---|
| `exercicio_salario.c` | Salário a partir de horas trabalhadas |
| `exercicio_media_ponderada.c` | Média ponderada de três notas |
| `exercicio_diferenca.c` | Diferença entre produtos (`A*B - C*D`) |

### 04 - Estruturas de decisão

`if`, `else`, `else if`, operadores relacionais e lógicos, e `switch` com `case`, `break` e `default`.

| Arquivo | Assunto |
|---|---|
| `estrutura_de_decisao01.c` | `if` / `else` simples |
| `estrutura_de_decisao02.c` | `else if` encadeado |
| `estrutura_de_decisao03.c` | Condições compostas com `&&` |
| `comando_switch.c` | `switch` com os dias da semana |
| `exercicio_estacoes_do_ano.c` | `switch` com as estações do ano |
| `exercicio_ddd.c` | `switch` com `default` |

### 05 - Estruturas de repetição

`for`, `while`, `do while`, laços aninhados, `break`, validação de entrada e leitura de vários casos de teste, inclusive até o fim do arquivo (EOF).

| Arquivo | Assunto |
|---|---|
| `do_while.c` | O `do while` executa pelo menos uma vez |
| `comando_do_while.c` | `do while` para validar entrada |
| `exercicio_senha_do_while.c` | Validação de senha com variável de controle |
| `break.c` | Interrompendo um laço com `break` |
| `tabuada_com_loop_aninhado.c` | Laços `for` aninhados |
| `exercicio_menu_com_switch_e_do_while.c` | Menu com `switch` dentro de `do while` |
| `exercicio_divisores.c` | Divisores de um número |
| `exercicio_par_ou_impar.c` | Par/ímpar e positivo/negativo para N valores |
| `exercicio_voleibol.c` | Acumuladores e cálculo de percentuais |
| `exercicio_evento.c` | Leitura até uma condição de parada |
| `exercicio_senha_sr_amnesio.c` | Leitura até o fim da entrada (EOF) |

### 06 - Vetores e matrizes

| Arquivo | Assunto |
|---|---|
| `vetores.c` | Declaração e acesso por índice |
| `vetores_basicos.c` | Percorrendo um vetor com `for` |
| `vetores_percorrendo.c` | Acesso por índice e percurso completo |
| `matrizes_basicos.c` | Matriz percorrida com laços aninhados |

### 07 - Strings

Strings como vetores de `char` e as funções da `string.h`.

| Arquivo | Assunto |
|---|---|
| `troca_de_senha_strcpy.c` | Cópia de strings com `strcpy` |
| `ordem_alfabetica_strcmp.c` | Comparação de strings com `strcmp` |
| `exercicio_chamada.c` | Vetor de strings e ordem alfabética (em andamento) |

### 08 - Structs

| Arquivo | Assunto |
|---|---|
| `struct.c` | Definindo e usando um `struct` |
| `array_de_structs.c` | Vetor de `struct` |
| `trabalho_cadastro.c` | Sistema de gestão escolar (em andamento) |

### 09 - Ponteiros, funções e memória

| Arquivo | Assunto |
|---|---|
| `ponteiros.c` | Declaração de ponteiro, operadores `&` e `*` |
| `ponteiros_teste.c` | Valor e endereço com e sem ponteiro |
| `funcao_troca.c` | Funções com passagem por referência |
| `comando_malloc.c` | Alocação dinâmica com `malloc`, `sizeof` e `free` |

### 10 - Complexidade de algoritmos

| Arquivo | Assunto |
|---|---|
| `tabela_complexidade.c` | Crescimento das funções de O(1) a O(n!), com funções auxiliares e exportação para CSV |

## Próximos passos

Conforme avanço no curso, o repositório vai receber as estruturas de dados propriamente ditas:

- Listas encadeadas
- Pilhas e filas
- Árvores
- Algoritmos de busca e ordenação

## Autor

Gustavo Vieira dos Santos, estudante de Ciência da Computação na UFMT.

[github.com/Gustavo-Red](https://github.com/Gustavo-Red)# Linguagem C e Estrutura de Dados

Repositório criado para registrar meus estudos e minha evolução na linguagem C durante a graduação em Ciência da Computação.

Aqui estão reunidos exercícios, testes e pequenos programas desenvolvidos para praticar os fundamentos da linguagem, lógica de programação e os primeiros conceitos relacionados à manipulação de dados.

## Sobre o repositório

Este repositório funciona como um registro prático do meu aprendizado em C.

Os programas foram desenvolvidos ao longo dos meus estudos, começando pelos conceitos mais básicos da linguagem e avançando gradualmente para tópicos como estruturas de decisão, estruturas de repetição, funções, strings, arrays e manipulação de dados.

Também utilizo exercícios de programação para colocar em prática os conceitos aprendidos e identificar pontos que ainda preciso melhorar.

## Conteúdos estudados

### Fundamentos da linguagem C

- Estrutura básica de um programa em C
- `#include`
- Função `main()`
- Variáveis
- Tipos de dados
- Declaração e inicialização de variáveis
- `printf`
- `scanf`
- Especificadores de formato
- Operadores aritméticos
- Operadores relacionais
- Operadores lógicos
- `sizeof`
- Limites de tipos utilizando `INT_MIN` e `INT_MAX`

### Estruturas de decisão

- `if`
- `else`
- `else if`
- Operadores de comparação
- Operadores lógicos
- `switch`
- `case`
- `default`
- `break`

### Estruturas de repetição

- `for`
- `while`
- `do while`
- Loops aninhados
- Uso de `break`
- Validação de entradas
- Repetição de operações até uma determinada condição

### Strings

- Declaração de strings
- Arrays de caracteres
- Entrada de strings
- `fgets`
- `scanf`
- `strlen`
- `strcmp`
- `strcpy`
- Comparação de strings
- Cópia de strings
- Manipulação de nomes e textos

### Arrays

- Declaração de arrays
- Inicialização
- Acesso aos elementos
- Percorrimento de arrays
- Arrays de strings
- Armazenamento de vários valores
- Manipulação de listas de dados

### Funções

- Declaração de funções
- Parâmetros
- Valores de retorno
- Organização do código utilizando funções
- Passagem de valores para funções

### Entrada e processamento de dados

- Leitura de dados com `scanf`
- Processamento de múltiplos casos de teste
- Leitura até o fim do arquivo (EOF)
- Validação de entradas
- Processamento de números e strings

### Estruturas de dados

Conforme avanço nos estudos, este repositório também será utilizado para estudar e implementar estruturas de dados.

Alguns dos conceitos que pretendo desenvolver incluem:

- Listas
- Pilhas
- Filas
- Árvores
- Busca
- Ordenação
- Algoritmos relacionados a estruturas de dados

## Exercícios

O repositório também contém exercícios de programação utilizados para praticar os conceitos estudados.

Entre eles estão exercícios envolvendo:

- Processamento de números
- Senhas
- Manipulação de nomes
- Ordenação alfabética
- Comparação de strings
- Arrays
- Estruturas de repetição
- Entrada e saída de dados

## Objetivo

O principal objetivo deste repositório é documentar minha evolução na programação utilizando C e construir uma base sólida para os estudos de Ciência da Computação.

Além de servir como material de revisão, este repositório representa meu processo de aprendizagem, desde os primeiros programas até a implementação de conceitos mais avançados.

## Tecnologias e ferramentas

- C
- GCC
- Git
- GitHub
- Linux

## Ambiente de desenvolvimento

Os estudos e exercícios são desenvolvidos em ambiente Linux, utilizando o compilador GCC e ferramentas de desenvolvimento disponíveis no sistema.

## Em desenvolvimento

Este repositório continuará sendo atualizado conforme novos conceitos forem estudados.

Novos exercícios, algoritmos e estruturas de dados serão adicionados progressivamente conforme avanço no curso e nos meus estudos de programação.

---

## Autor

**Gustavo Vieira dos Santos**

Estudante de Ciência da Computação.
