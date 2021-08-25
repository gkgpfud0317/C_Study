#include <stdio.h>
int main() {
	int min, max, num1, num2, i;
	scanf("%d %d", &num1, &num2);
	if (num1 > num2) {
		min = num2;
		max = num1;
	}
	else {
		min = num1;
		max = num2;
	}
	for (i = min; i <= max; i++) {
		printf("%d ", i);
	}
	return 0;
}
