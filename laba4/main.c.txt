#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "triangle.h"
int main(){
	double x, y, z;
	printf("enter the values of the sides of the triangle ");
	scanf("%lf%lf%lf",&x,&y,&z);
	if (real(x,y,z)){
		printf("%s%lf%s%s%lf", "perimeter is ", per(x, y, z), "\n", "ploshad' is ", plosh(x, y, z));
	}
	else{
		printf("error:( this triangle is not real");
	}
	return 0;
}
