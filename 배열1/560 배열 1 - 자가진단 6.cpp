#include <stdio.h>
int main() {
	int min = 1000;
	int num[10];
	int i, j;

	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	for (i = 0; i < 10; i++) {
		if (min > num[i]) {
			min = num[i];
		}
	}
	printf("%d\n", min);
	return 0;
}
