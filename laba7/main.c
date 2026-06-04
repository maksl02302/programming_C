#include <stdio.h>
#include <string.h>

#define SIZE 4  // размер массива

// Структура для хранения информации о человеке
struct human {
    char name[50];      // имя
    char lastname[50];  // фамилия
    int year;           // год рождения
};

int main() {
    // Объявляем все переменные в начале (студенческий стиль)
    struct human array1[SIZE];  // исходный массив
    struct human array2[SIZE];  // отсортированный массив
    struct human temp;          // для обмена при сортировке
    int i, j, choice;           // счётчики и переменная выбора
    FILE *file;                 // указатель на файл
    
    // Выбор способа ввода
    printf("Выберите способ ввода данных:\n");
    printf("1 - ввод с клавиатуры\n");
    printf("2 - ввод из файла\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        // Ввод с клавиатуры
        printf("\nВведите данные о %d людях:\n", SIZE);
        for (i = 0; i < SIZE; i++) {
            printf("\nЧеловек %d:\n", i + 1);
            printf("  Имя: ");
            scanf("%s", array1[i].name);
            printf("  Фамилия: ");
            scanf("%s", array1[i].lastname);
            printf("  Год рождения: ");
            scanf("%d", &array1[i].year);
        }
    } 
    else {
        // Ввод из файла
        file = fopen("input.txt", "r");
        if (file == NULL) {
            printf("Ошибка! Не удалось открыть файл input.txt\n");
            return 1;  // выход с ошибкой
        }
        
        // Читаем данные из файла
        for (i = 0; i < SIZE; i++) {
            fscanf(file, "%s %s %d", array1[i].name, array1[i].lastname, &array1[i].year);
        }
        fclose(file);  // закрываем файл
        printf("Данные успешно загружены из файла!\n");
    }
    
    for (i = 0; i < SIZE; i++) {
        array2[i] = array1[i];  // копируем структуры
    }

    // Сортируем второй массив по возрастанию года рождения
    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - i - 1; j++) {
            if (array2[j].year > array2[j + 1].year) {
                // Меняем местами
                temp = array2[j];
                array2[j] = array2[j + 1];
                array2[j + 1] = temp;
            }
        }
    }
    
    printf("\n Результат \n");
    
    // Вывод первого массива (оригинальный порядок)
    printf("\nИсходный массив:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d. %s %s, %d год\n", i + 1, array1[i].name, array1[i].lastname, array1[i].year);
    }
    
    // Вывод второго массива (отсортированный по годам)
    printf("\nОтсортированный массив (по возрастанию года):\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d. %s %s, %d год\n", i + 1, array2[i].name, array2[i].lastname, array2[i].year);
    }
    
    printf("\nПрограмма завершена!\n");
    return 0;  // успешное завершение
}