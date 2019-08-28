#include <stdio.h>

void swap (int* x, int* y){
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

int main (){
	int a;
	int b;
	printf("%s\n", "Print your numbers here:");
	scanf("%d", &a);
	scanf("%d", &b);
	swap(&a, &b);
	printf("%d", a);
	printf("%c", ' ');
	printf("%d\n", b);
	return 0;
}