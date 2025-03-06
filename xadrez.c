#include <stdio.h>

// Função recursiva para movimentar a Torre (somente para direita)
void movertorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n");
    movertorre(casas - 1);
}

// Função recursiva para movimentar a Rainha (somente para esquerda)
void moverrainha(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Esquerda\n");
    moverrainha(casas - 1);
}

// Função recursiva para movimentar o Bispo em diagonal
void moverbispoRecursivo(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Diagonal direita/esquerda\n");
    moverbispoRecursivo(casas - 1);
}

// Função com loops aninhados para movimentar o Bispo (simulando diagonal)
void moverbispoLoop(int casas) {
    for (int i = 0; i < casas; i++) { // Movimento vertical
        for (int j = 0; j <= i; j++) { // Movimento horizontal proporcional ao vertical
            printf("Diagonal direita/esquerda\n");
        }
    }
}

// Função para movimentar o Cavalo em "L"
void movercavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
    }
}

int main() {
    int bispo, rainha, cavalo, torre;

    // Movimentação do Bispo (recursivo)
    printf("Digite quantas casas para mover o Bispo (recursivo): ");
    scanf("%d", &bispo);
    moverbispoRecursivo(bispo);
    

    // Movimentação do Bispo (com loops aninhados)
    printf("Digite quantas casas para mover o Bispo (com loops aninhados): ");
    scanf("%d", &bispo);
    moverbispoLoop(bispo);
    

    // Movimentação da Torre (recursiva)
    printf("Digite quantas casas para mover a Torre: ");
    scanf("%d", &torre);
    movertorre(torre);
    
    // Movimentação da Rainha (recursiva)
    printf("Digite quantas casas para mover a Rainha: ");
    scanf("%d", &rainha);
    moverrainha(rainha);
    

    // Movimentação do Cavalo
    printf("Digite quantos movimentos em 'L' o Cavalo fará: ");
    scanf("%d", &cavalo);
    movercavalo(cavalo);
    

    return 0;
}
