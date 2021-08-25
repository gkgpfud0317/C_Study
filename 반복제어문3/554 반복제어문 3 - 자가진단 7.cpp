#include <stdio.h>
int main() {
	int i, j, number, num = 1;
	char alpha = 'A';
	
	scanf("%d", &number);
	for (i = number; i >= 1; i--) {
		for (j = i; j >= 1; j--) {
			printf("%d ", num++);
		}
		for (j = 1; j <= number - i + 1 ; j++) {
			printf("%c ", alpha++);
		}
		printf("\n");
	}
	return 0;
}
