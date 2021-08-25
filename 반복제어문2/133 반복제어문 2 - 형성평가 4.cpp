#include <stdio.h>
int main() {
	int num1, num2, i, sum = 0;
	float avg;
	scanf("%d", &num1);
	for (i = 1; i <= num1; i++) {
		scanf("%d", &num2);
		sum += num2;
	}
	avg = (float)sum / num1;
	printf("%.2f", avg);
	return 0;
}
