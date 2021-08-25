#include <stdio.h>
int main() {
	int a, b,i, j;
	scanf("%d %d", &a, &b);
	if (a > b) {
		for (j = 1; j <= 9; j++) {
			for (i = a; i >= b; i--) {
				printf("%d * %d = %2d   ", i, j, i*j);
			}
			printf("\n");
		}
	}
	else {
		for (j = 1; j <= 9; j++) {
			for (i = a; i <= b; i++) {
				printf("%d * %d = %2d   ", i, j, i * j);
			}
			printf("\n");
		}
	}
	return 0;
}
