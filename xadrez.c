#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (usando while)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha (usando do-while)
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimento do Cavalo (usando for e while aninhados)
    printf("\n\nMovimento do Cavalo:\n");
    for (int baixo = 0; baixo < 2; baixo++) { // Move duas casas para baixo
        printf("Baixo\n");
    }
    int esquerda = 0;
    while (esquerda < 1) { // Move uma casa para a esquerda
        printf("Esquerda\n");
        esquerda++;
    }

    return 0;
}