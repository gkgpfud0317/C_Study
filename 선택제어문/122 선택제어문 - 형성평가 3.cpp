#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a % 400 == 0)
		printf("leap year");
	else if ((a % 4 == 0)&&(a % 100 != 0))
		printf("leap year");
	else
		printf("common year");
	return 0;
}
