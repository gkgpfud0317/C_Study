#include <stdio.h>
int main() {
	int num;
	int sum = 0, count = 0;
	int avg;

	while (1) {
		scanf("%d", &num);
		if (num == 0)
			break;
		if (num % 2 == 0)
			continue;		//°è¼ÓÇÏ´Ù
		sum += num;
		count++;
	}
	avg = sum / count;
	printf("È¦¼öÀÇ ÇÕ = %d \n", sum);
	printf("È¦¼öÀÇ Æò±Õ = %d \n", avg);
	return 0;
}
