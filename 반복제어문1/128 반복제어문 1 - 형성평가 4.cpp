#include <stdio.h>
int main() {
	int num, count = 0;

	while (1) {
		scanf("%d", &num);
		if (num == 0)
			break;
		if(num % 3 != 0 && num % 5 != 0)		// (num % 3 && num % 5)
			count++;
	}
	printf("%d", count);
	return 0;
}
