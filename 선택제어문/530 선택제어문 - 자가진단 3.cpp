#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a >= 20)
		printf("adult");
	else
		printf("%d years later", 20 - a);

	return 0;
}
