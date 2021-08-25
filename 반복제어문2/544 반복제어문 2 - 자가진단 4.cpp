#include <stdio.h>
int main() {
	int i = 0, num, sum = 0;
	scanf("%d", &num);
	for (i = num; i <= 100; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
