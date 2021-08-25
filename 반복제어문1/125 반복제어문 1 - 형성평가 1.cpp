#include <stdio.h>
int main() {
	int a, b = 1;
	scanf("%d", &a);
	while (b <= a) {
		printf("%d ", b);
		b++;
	}
}
