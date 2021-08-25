#include <stdio.h>
int main() {
	int n, i, mul;
	scanf("%d", &n);
	for (i = 1; i <= 100; i++) {
		mul = n * i;
		if (mul >= 100)
			break;
		printf("%d ", mul);
		if (mul % 10 == 0)
			break;
	}
	return 0;
}
