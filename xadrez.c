#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo em diagonal com loops aninhados
void moverBispo(int casas) {
    if (casas == 0) return;
    for (int i = 0; i < 1; i++) { // Loop externo simula "Cima"
        for (int j = 0; j < 1; j++) { // Loop interno simula "Direita"
            printf("Cima Direita\n");
        }
    }
    moverBispo(casas - 1);
}

// Função para mover o Cavalo com loops aninhados e condições
void moverCavalo() {
    int movimentosFeitos = 0;
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
        } else {
            for (int j = 0; j < 2; j++) {
                if (j == 1) {
                    printf("Direita\n");
                    break;
                }
                continue;
            }
        }
        movimentosFeitos++;
    }
}

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}



   