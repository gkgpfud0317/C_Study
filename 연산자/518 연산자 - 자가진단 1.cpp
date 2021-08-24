#include <stdio.h>
int main() {
	int a, b, c;
	int sum, avg;
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	avg = (a + b + c) / 3;
	printf("sum : %d\n", sum);
	printf("avg : %d\n", avg);
	return 0;
}
