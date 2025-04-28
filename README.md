#include <stdio.h>

int main() {
    // Tabuleiro 5x5 para o nível novato
    int tabuleiro[5][5] = {0};

    // Posicionamento manual dos navios
    int navio_vertical_x = 2; // linha
    int navio_vertical_y = 1; // coluna

    int navio_horizontal_x = 4; // linha
    int navio_horizontal_y = 0; // coluna

    printf("Posicionando navio vertical:\n");
    for (int i = 0; i < 3; i++) { // navio de 3 espaços
        tabuleiro[navio_vertical_x + i][navio_vertical_y] = 3;
        printf("(%d, %d)\n", navio_vertical_x + i, navio_vertical_y);
    }

    printf("\nPosicionando navio horizontal:\n");
    for (int j = 0; j < 3; j++) { // navio de 3 espaços
        tabuleiro[navio_horizontal_x][navio_horizontal_y + j] = 3;
        printf("(%d, %d)\n", navio_horizontal_x, navio_horizontal_y + j);
    }

    return 0;
}
