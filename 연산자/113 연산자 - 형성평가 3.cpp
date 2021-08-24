#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a = a + 5;
	b = b * 2;
	printf("width = %d\n", a);
	printf("length = %d\n", b);
	printf("area = %d", a * b);
	return 0;
}
