#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Posicionar navios:
    // 1 - Vertical
    for (int i = 0; i < 4; i++) {
        tabuleiro[1 + i][2] = 3;
    }

    // 2 - Horizontal
    for (int j = 0; j < 4; j++) {
        tabuleiro[6][4 + j] = 3;
    }

    // 3 - Diagonal principal
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // 4 - Diagonal secundária
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibir o tabuleiro completo
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
