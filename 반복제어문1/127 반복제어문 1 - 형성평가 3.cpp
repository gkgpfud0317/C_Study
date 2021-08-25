#include <stdio.h>
int main() {
	int num, sum = 0, count = 0;

	while (1) {
		scanf("%d", &num);
		if (num < 0 || num>100)
			break;
		sum += num;
		count++;
	}
	printf("sum : %d \n", sum);
	printf("avg : %.1lf", (double)sum / count);
	return 0;
}
