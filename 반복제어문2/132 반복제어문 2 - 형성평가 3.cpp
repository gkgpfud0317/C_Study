#include <stdio.h>
int main() {
	int num, i, sum = 0;
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		if (i % 5 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
