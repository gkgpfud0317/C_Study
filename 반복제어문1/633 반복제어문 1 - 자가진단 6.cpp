#include <stdio.h>
int main() {
	int a;
	while (1) {
		printf("1. Korea \n");
		printf("2. USA \n");
		printf("3. Japan \n");
		printf("4. China \n");
		printf("number? ");
		scanf("%d", &a);
		printf("\n");

		switch (a) {
		case 1:
			printf("Seoul \n\n");
			break;
		case 2:
			printf("Washington \n\n");
			break;
		case 3:
			printf("Tokyo \n\n");
			break;
		case 4:
			printf("Beijing \n\n");
			break;
		default:
			printf("none \n\n");
		}
		if (a>4 || a<1)
			break;
	}
	return 0;
}
