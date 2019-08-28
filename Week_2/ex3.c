#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", n);
	for (int i = 0; i <= n; i++){
		for (int j = n - i + 1; j > 0; j--){
			printf("%c", ' ');
		}
		for (int j = 0; j < (2*i - 1); j++){
			printf("%c", '*');
		}
		printf("\n");
	}
	return 0;
}