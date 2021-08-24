#include <stdio.h>
int main() {
	int a, b, c;
	int small_data;
	scanf("%d %d %d", &a, &b, &c);

	small_data = (a < b) ? (a < c) ? a : c	: (b < c) ? b : c;

	printf("%d\n", small_data);
	return 0;
}
