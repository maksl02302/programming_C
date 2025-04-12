#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "triangle.h"

int main() {
    double x, y, z;
    double perimeter, area, height; 
    printf("Введите стороны треугольника: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    
    if (real(x, y, z)) {
        area = plosh(x, y, z);
        height = h(area, x);
        printf("Площадь: %lf\nВысота: %lf\n",
                area, x);
    }
    else {
        printf("error:( Треугольника не существует");
    }
    
    return 0;
}