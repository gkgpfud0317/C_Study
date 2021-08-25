#include <stdio.h>
int main() {
	int i, j, n, num = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (num > 10)
				num -= 10;
			printf("%d ", num);
			num += 2;
		}
		printf("\n");
	}
	return 0;
}
