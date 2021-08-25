#include <stdio.h>
int main() {
	int Base, Height;
	char num;

	do {
		printf("Base = ");
		scanf("%d", &Base);
		printf("Height = ");
		scanf("%d", &Height);
		printf("Triangle width = %.1f", Base * Height * 0.5);
		printf("\nContinue? ");
		scanf(" %c", &num);
	} while (num == 'Y' || num == 'y');

	return 0;
}
