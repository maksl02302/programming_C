#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

// Функция для сложения, вычитания и умножения матриц
double **matrixOperation(double **A, double **B, int n, char op) {
    // Выделяем память под матрицу результата
    double **result = (double **)malloc(n * sizeof(double *));

    for (int i = 0; i < n; i++) {
        result[i] = (double *)malloc(n * sizeof(double));
    }

    switch (op) {
        case '+':  // Сложение матриц
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    result[i][j] = A[i][j] + B[i][j];
                }
            }
            break;

        case '-':  // Вычитание матриц
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    result[i][j] = A[i][j] - B[i][j];
                }
            }
            break;

        case '*':  // Умножение матриц
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    result[i][j] = 0;  // обнуляем элемент
                    for (int k = 0; k < n; k++) {
                        // Умножаем строку i на столбец j
                        result[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            break;

        default:  // Если операция не поддерживается
            printf("Ошибка: Неизвестная операция '%c'\n", op);
            // Освобождаем память перед выходом
            for (int i = 0; i < n; i++) {
                free(result[i]);
            }
            free(result);
            return NULL;
    }

    return result;
}