#include <stdio.h>

int main() {
    // Torre - 5 casas para a direita (for)
    int i;
    printf("Movimento da Torre:\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Bispo - 5 casas na diagonal para cima e à direita (while)
    int j = 1;
    printf("Movimento do Bispo:\n");
    while(j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Rainha - 8 casas para a esquerda (do-while)
    int k = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= 8);

    printf("\n");

    // Cavalo - 2 casas para baixo e 1 para a esquerda (for + while)
    int passo;
    printf("Movimento do Cavalo:\n");

    for(passo = 1; passo <= 2; passo++) {
        printf("Baixo\n");
    }

    int mov = 1;
    while(mov <= 1) {
        printf("Esquerda\n");
        mov++;
    }

    return 0;
}



    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

  
