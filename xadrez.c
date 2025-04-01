#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita %d\n", casas);
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispo(int casas, int passo) {
    if (casas == 0) return;
    printf("Cima Direita %d\n", passo);
    moverBispo(casas - 1, passo + 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda %d\n", casas);
    moverRainha(casas - 1);
}

// Função para mover o Cavalo usando loops aninhados
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= movimentos; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("Cima %d\n", i * 2);
            printf("Direita %d\n", j);
        }
        printf("\n");
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo
    moverCavalo(3);
    
    return 0;
}
