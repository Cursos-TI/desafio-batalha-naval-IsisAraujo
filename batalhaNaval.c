#include <stdio.h>

void habilidade_cone() {
    int matriz[5][5] = {0};

    // Criando formato de cone
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if ((j >= 2 - i) && (j <= 2 + i)) {
                matriz[i][j] = 1;
            }
        }
    }

    printf("Habilidade: Cone\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void habilidade_cruz() {
    int matriz[5][5] = {0};

    // Criando formato de cruz
    for (int i = 0; i < 5; i++) {
        matriz[2][i] = 1; // linha do meio
        matriz[i][2] = 1; // coluna do meio
    }

    printf("Habilidade: Cruz\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void habilidade_octaedro() {
    int matriz[5][5] = {0};

    // Criando formato de octaedro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) || (i == 1 && (j >= 1 && j <= 3)) || (i == 2 && j == 2)) {
                matriz[i][j] = 1;
            }
        }
    }

    printf("Habilidade: Octaedro\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    habilidade_cone();
    habilidade_cruz();
    habilidade_octaedro();

    return 0;
}
