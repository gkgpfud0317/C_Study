#include <stdio.h>
int a() {
	printf("~!@#$^&*()_+|");
	printf("\n");
}

int main() {
	int num, i;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		a();
	}
	return 0;
}
