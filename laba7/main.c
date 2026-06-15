#include <stdio.h>
#include <stdlib.h>

struct human {
    char name[50];
    char lastname[50];
    int year;
};

int main() {
    struct human *arr1, *arr2, temp;
    int n, choice, i, j;
    FILE *f;
    
    printf("Введите количество людей: ");
    scanf("%d", &n);
    
    arr1 = malloc(n * sizeof(struct human));
    arr2 = malloc(n * sizeof(struct human));
    
    if (!arr1 || !arr2) return 1;
    
    printf("1 - ввод с клавиатуры\n2 - ввод из файла\nВыбор: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        for (i = 0; i < n; i++) {
            printf("%d. Имя Фамилия Год: ", i+1);
            scanf("%s %s %d", arr1[i].name, arr1[i].lastname, &arr1[i].year);
        }
    } else {
        f = fopen("input.txt", "r");
        if (!f) return 1;
        for (i = 0; i < n; i++)
            fscanf(f, "%s %s %d", arr1[i].name, arr1[i].lastname, &arr1[i].year);
        fclose(f);
    }
    
    for (i = 0; i < n; i++) arr2[i] = arr1[i];
    
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr2[j].year > arr2[j+1].year) {
                temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
    
    printf("\nИсходный:\n");
    for (i = 0; i < n; i++)
        printf("%d. %s %s, %d\n", i+1, arr1[i].name, arr1[i].lastname, arr1[i].year);
    
    printf("\nОтсортированный:\n");
    for (i = 0; i < n; i++)
        printf("%d. %s %s, %d\n", i+1, arr2[i].name, arr2[i].lastname, arr2[i].year);
    
    free(arr1);
    free(arr2);
    return 0;
}
