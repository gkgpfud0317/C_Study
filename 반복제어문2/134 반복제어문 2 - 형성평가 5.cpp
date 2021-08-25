#include <stdio.h>
int main() {
	int num, even = 0, odd = 0, i;
	for (i = 1; i <= 10; i++) {
		scanf("%d", &num);
		if (num % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("even : %d \n", even);
	printf("odd : %d", odd);
	return 0;
}
