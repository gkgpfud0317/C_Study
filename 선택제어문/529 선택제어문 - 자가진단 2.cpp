#include <stdio.h>
int main() {
	int cm, weight, c;
	scanf("%d %d", &cm, &weight);
	c = weight + 100 - cm;
	printf("%d\n", c);
	if (c > 0) {
		printf("Obesity");
	}
	return 0;
}
