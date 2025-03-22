#include <stdio.h>
#include <stdlib.h>

/* 
	ЗАДАНИЕ 2
	Объявить массив данных типа double размером 3 на 3.
 	Ввести с консоли его значения, вывести на консоль сумму его элементов, расположенных на главной диагонали и сумму элементов, расположенных на побочной диагонали.
	Объявить массив данных типа int размером 2 на 2.
 	Ввести с консоли его значе-ния, вывести на консоль квадрат данной матрицы.
*/

int main() {
int n;
printf("vvedite n \n");
scanf("%d", &n);
double array[n][n];
int i; int j; int k;
for (i=0; i<n; i++){
  	for (j=0; j<n; j++){
  		printf("vvedite element massiva \n");
   		scanf("%lf", &array[i][j]);
  }
}
	double sg;
	double sp;
	for(i=0; i<n; i+=1){
		sg+=array[i][i];
		sp+=array[i][n-i-1];
	}
 	printf("%lf%s%lf%s", sg, "\n", sp, "\n");


int m;
printf("vvedite m \n");
scanf("%d", &m);
int array1[m][m];
for (i=0; i<n; i++){
  	for (j=0; j<n; j++){
  		printf(" vvedite element massiva \n");
   		scanf("%d", &array1[i][j]);
}
}
   		
int array2[m][m];
 for (i=0; i<m; i+=1){
  for(j=0; j<m; j+=1){
   array2[i][j]=0;
   for(k=0; k<m; k++){
    array2[i][j] += array1[i][k] * array1[k][j];
   }
  }
 }
 for (i=0; i<m; i++){
  for(j=0; j<m; j++){
   printf("%d ", array2[i][j]);
  }
  printf("\n");
 }
return 0;
}

 
