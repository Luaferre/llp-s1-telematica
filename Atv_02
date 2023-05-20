#include <stdio.h>

void somaMatrizes(int (*matrixA)[3], int (*matrixB)[3], int (*matrixC)[3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

int main() {
    int matrixA[3][3] = { {296,47, 98, 74, 7, 96}, {404, 87, 91, 38, 20, 19}, {810, 98, 559, 2, 309, 3} };

    int matrixB[3][3] = { {1, 8, 17, 18, 72, 42}, {6, 15, 224, 56, 71, 93}, {63, 2, 91, 61, 69, 28} };

    int matrixC[3][3]; // Matriz resultado

    somaMatrizes(matrixA, matrixB, matrixC, 3);

    printf("Matriz C (A + B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
