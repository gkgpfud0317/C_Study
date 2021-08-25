#include <stdio.h>
int main() {
	int i, j;
	for (i = 2; i <= 4; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%-2d*%2d =%3d   ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
