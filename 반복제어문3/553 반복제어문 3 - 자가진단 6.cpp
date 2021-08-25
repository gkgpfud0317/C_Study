#include <stdio.h>
int main() {
	int i, j, n;
	char ch = 'A';

	scanf("%d", &n);

	for (i = n; i >= 1; i--) {
		for (j = i; j >= 1; j--) {
			printf("%c", ch++);
		}
		printf("\n");
	}
	return 0;
}
