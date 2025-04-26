#include <stdio.h>
#include <stdlib.h>

double* C(double* A, double* B, int n){
double* itog = (double*)malloc(n * n * sizeof(double));
int i;
for (i = 0; i < n * n; i++) {
        itog[i] = A[i] + B[i];
}
return itog;
}
double* D(double* A, double* B, int n){
double* itog = (double*)malloc(n * n * sizeof(double));
int i;
for (i = 0; i < n * n; i++) {
    itog[i] = A[i] - B[i];
}
return itog;
}
double* E(double* A, double* B, int n){
double* itog = (double*)malloc(n * n * sizeof(double));
int i;
for (i = 0; i < n; i++) {
	int j;
    for (j = 0; j < n; j++) {
        itog[i * n + j] = 0;
        int k;
        for (k = 0; k < n; k++) {
            itog[i * n + j] += A[i * n + k] * B[k * n + j];
			}
		}
	}
return itog;
}