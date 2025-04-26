#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main() {
	char s;
	printf("enter +, - or * \n");
	scanf("%c", &s);
	int n;
	printf("enter n \n");
	scanf("%d", &n);
	double **A, **B;
	A = (double**)malloc(n * (sizeof(double*)));
	int i;
	for (i=0; i<n; i++){
		A[i] = (double*)malloc(n * (sizeof(double)));		
	}
    B = (double**)malloc(n * (sizeof(double*)));
	for (i=0; i<n; i++){
		B[i] = (double*)malloc(n * (sizeof(double)));		
	}
	
	for (i=0; i<n;i++){
		int j;
			for (j=0; j<n;j++){
				printf("input number of matrix A[%d][%d]\n", i, j);
				scanf("%lf", &A[i][j]);
			}ФМ
	}
    for (i=0; i<n;i++){
		int j;
			for (j=0; j<n;j++){
				printf("input number of matrix B[%d][%d]\n", i, j);
				scanf("%lf", &B[i][j]);
			}
		}
	double** itog = NULL;

    if (s =='+')
	{
    	itog = sum(A, B, n);
	}
	
	else if (s=='-'){
    	itog = ras(A, B, n);
	}
	else if (s=='*'){
    	itog = umn(A, B, n);
	}
	else{
		printf("wrong operation :(");
	}
	if (itog != NULL) {
        printf("itog \n");
        int i;
        for (i = 0; i < n; i++) {
        	int j;
            for (j = 0; j < n; j++) {
                printf("%lf", itog[i][j]);
            }
            printf(" \n");
        }
    }
    free(A);
    free(B);
    free(sum);
    free(ras);
    free(umn);
	return 0;
}