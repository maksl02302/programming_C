#include <stdio.h>
#include <stdlib.h>
double** sum(double** A, double** B, int n){
	int i,j;
	double **itog;
	itog = (double**)malloc(n * (sizeof(double*)));
	for (i=0; i<n; i++){
		itog[i] = (double*)malloc(n * (sizeof(double)));		
}
	for (i = 0; i < n; i++) {
	        for (j = 0; j < n; j++) {
		        itog[i][j] = A[i][j] + B[i][j];
		}
	}
	return itog;
}
double** ras(double** A, double** B, int n){
	double **itog;
	itog = (double**)malloc(n * (sizeof(double*)));	
	int i;
	for (i=0; i<n; i++){
		itog[i] = (double*)malloc(n * (sizeof(double)));		
		}
	
	for (i = 0; i < n; i++) {
		int j;
	        for (j = 0; j < n; j++) {
		        	itog[i][j] = A[i][j] - B[i][j];
		}
	}
	return itog;
}
double** umn(double** A, double** B, int n){
	double **itog;
	itog = (double**)malloc(n * (sizeof(double*)));
		int i;
		for (i=0; i<n; i++){
			itog[i] = (double*)malloc(n * (sizeof(double)));
		}
	for (i = 0; i < n; i++) {
		int j;
	    for (j = 0; j < n; j++) {
	        itog[i][j] = 0;
	        int k;
	        for (k = 0; k < n; k++) {
	            itog[i][j] += A[i][k] * B[k][j];
				}
			}
		}
	return itog;
}