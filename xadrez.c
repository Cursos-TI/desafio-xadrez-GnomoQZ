#include <stdio.h>

// Função recursiva para mover a torre
void movertorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movertorre(casas - 1);
    }
}

// Função recursiva para mover o Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Diagonal direita/esquerda\n");
        moverBispo(casas - 1);
    }
}

// Função para movimentação do cavalo em L
void moverCavalo() {
    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");
}

int main() {
    int bispo, rainha, cavalo, torre;

    // Movimentação do Bispo
    printf("Digite quantas casas para mover o Bispo: ");
    scanf("%d", &bispo);
    moverBispo(bispo);

    // Movimentação da Torre (recursiva)
    printf("Digite quantas casas para mover a Torre: ");
    scanf("%d", &torre);
    movertorre(torre);

    // Movimentação da Rainha para a esquerda
    printf("Digite quantas casas para mover a Rainha: ");
    scanf("%d", &rainha);
    for (int i = 0; i < rainha; i++) {
        printf("Esquerda\n");
    }

    // Movimentação do Cavalo
    printf("Movimentação do Cavalo em L:\n");
    moverCavalo();

    return 0;
}
