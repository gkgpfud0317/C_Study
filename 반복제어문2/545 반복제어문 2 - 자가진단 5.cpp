#include <stdio.h>
int main() {
	int i, num, three = 0, five = 0;

	for (i = 1; i <= 10; i++) {
		scanf("%d", &num);
		if (num % 3 == 0)
			three++;
		if (num % 5 == 0)
			five++;
	}
	printf("Multiples of 3 : %d \n", three);
	printf("Multiples of 5 : %d", five);
}
