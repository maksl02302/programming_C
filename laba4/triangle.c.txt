#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
double per(double a, double b, double c){
	return a+b+c;
}
double plosh(double a, double b, double c){
	return sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c));
}
bool real(double a, double b, double c){
	if((a+b>c) && (a+c>b) && (c+b>a)){
		return true;
	}
	else return false;
}