#include <math.h>;
#include <stdio.h>;

int main() {
    double a=2, b=5, c=3, x1=0, x2=0, d=0;
    
    d  = b*b-4*a*c;
    
    printf("D = %lf\n", d);
    
    x1 = (-b+sqrt(d))/(2*a);
    x2 = (-b-sqrt(d))/(2*a);
    
    printf("X1 = %lf\nX2 = %lf", x1, x2);

    return 0;
}