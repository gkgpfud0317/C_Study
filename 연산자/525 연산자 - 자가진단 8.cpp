#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int result1 = (a > b) && (a > c);
	int result2 = (a == b) && (b == c);
	printf("%d %d", result1, result2);
	return 0;
}
