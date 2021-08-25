#include <stdio.h>
int main() {
	int i, j, n, num = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++)
			printf("  ");
		for (j = i; j < n; j++)
			printf("%d ", num++);
		printf("\n");
	}
	return 0;
}
