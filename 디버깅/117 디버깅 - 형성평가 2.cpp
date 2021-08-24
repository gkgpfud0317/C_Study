#include <stdio.h>
int main() {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("sum %d\n", (int)a + (int)b + (int)c);
	printf("avg %d\n", (int)((a + b + c) / 3));
	return 0;
}
