#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	int x;
	float y;
	double z;
	x = INT_MAX;
	y = FLT_MAX;
	z = DBL_MAX;
	printf("%s", "int: size:");
	printf("%ld", sizeof(int));
	printf("%s", " max:");
	printf("%d\n", x);

	printf("%s", "float: size:");
	printf("%ld", sizeof(float));
	printf("%s", " max:");
	printf("%f\n", y);

	printf("%s", "double: size:");
	printf("%ld", sizeof(double));
	printf("%s", " max:");
	printf("%f\n", z);
	return 0;
}