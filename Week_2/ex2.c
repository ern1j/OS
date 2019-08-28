#include <stdio.h>
#include <string.h>
#define LENGTH_OF_STRING 1000

int main()
{
	printf("%s", "Print your string here:");
	char str[LENGTH_OF_STRING];
	scanf("%s", str);
	int n = strlen(str);
	char reverse_str[n + 1];
	for (int i = 0; i < n; i++){
		reverse_str[n - i - 1] = str[i];
	}
	reverse_str[n] = '\0';
	printf("%s\n", reverse_str);

	return 0;
} 