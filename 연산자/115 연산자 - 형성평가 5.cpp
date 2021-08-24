#include <stdio.h>
int main() {
	int a, b, c, d, result1;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	result1 = (a > c) && (b > d);
	printf("%d", result1);
	return 0;
}
