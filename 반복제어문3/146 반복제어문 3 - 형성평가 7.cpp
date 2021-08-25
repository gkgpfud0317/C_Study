#include <stdio.h>
int main() {
	int i, j, number, num = 0;
	char alpha = 'A';

	scanf("%d", &number);
		for (i = number; i >= 1; i--) {
			for (j = 1; j <= i; j++) {
			printf("%c ", alpha++);
			}
			for (j = number; j > i; j--)
			printf("%d ", num++);
		printf("\n");
	}
	return 0;
}
