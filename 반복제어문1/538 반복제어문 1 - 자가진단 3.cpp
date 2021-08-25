#include <stdio.h>
int main() {
	int a;

	while (1) {
		printf("number? ");
		scanf("%d", &a);

		if (a == 0) break;
		if (a > 0) {
			printf("positive integer \n");
		}
		else {
			printf("negative number \n");
		}
	}
	return 0;
}
