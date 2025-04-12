#include <math.h>
#include "triangle.h"

int real(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double perim(double a, double b, double c) {
    return a + b + c;
}

double plosh(double a, double b, double c) {
    double p = perim(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double h(double site, double area) {
    return (2 * area) / site; 
}