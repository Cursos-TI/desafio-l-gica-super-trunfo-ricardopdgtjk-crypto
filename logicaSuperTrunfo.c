#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    //carta1
      char nome_da_cidade[30];
      int populacao;

printf("Carta 1\n");
printf("Forneça o nome da cidade:\n");

  scanf(" %s", &nome_da_cidade);

    printf("Forneça a população da cidade:\n");

  scanf("%d", &populacao);

  //carta2

    char nome_da_cidade2[30];
    int populacao2;

  printf("Carta 2\n");
printf("Forneça o nome da cidade2:\n");

  scanf(" %s", &nome_da_cidade2);

    printf("Forneça a população da cidade2:\n");

  scanf("%d", &populacao2);

  if (populacao > populacao2){
    printf ("carta 1 é maior do que a carta 2. \n");
    { else
    printf("carta 1 é menor do que a carta 2")}
  }




}

    return 0;
}
