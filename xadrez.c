#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Movimento da Torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo (recursivo e loops aninhados)
    printf("\n\nMovimento do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    // Movimento da Rainha (recursivo)
    printf("\n\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo (loops complexos)
    printf("\n\nMovimento do Cavalo:\n");
    int cima = 0;
    while (cima < 2) {
        printf("Cima\n");
        cima++;
    }

    int direita = 0;
    do {
        printf("Direita\n");
        direita++;
    } while (direita < 1);

    return 0;
}