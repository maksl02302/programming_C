//
// Created by Alexandr Manaenkov on 23.04.2026.
//


#include <stdio.h>
#include <stdlib.h>
#include <matrix.h>

void inputMatrix(double **matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }
}

void printMatrix(double **matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

double **allocateMatrix(int n) {
    double **matrix = (double **)malloc(n * sizeof(double *));

    for (int i = 0; i < n; i++) {
        matrix[i] = (double *)malloc(n * sizeof(double));
    }

    return matrix;
}

void freeMatrix(double **matrix, int n) {
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int n;
    char op;

    printf("Введите размер матриц: ");
    scanf("%d", &n);

    double **A = allocateMatrix(n);
    double **B = allocateMatrix(n);

    printf("Введите элементы первой матрицы:\n");
    inputMatrix(A, n);

    printf("Введите элементы второй матрицы:\n");
    inputMatrix(B, n);

    printf("Введите операцию (+, -, *): ");
    scanf(" %c", &op);

    double **result = matrixOperation(A, B, n, op);

    if (result == NULL) {
        printf("Ошибка операции.\n");
    } else {
        printf("Результат:\n");
        printMatrix(result, n);
        freeMatrix(result, n);
    }

    freeMatrix(A, n);
    freeMatrix(B, n);

    return 0;
}