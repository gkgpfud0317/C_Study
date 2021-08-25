#include <stdio.h>
int main() {
	int a, b, num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}
	return 0;
}
