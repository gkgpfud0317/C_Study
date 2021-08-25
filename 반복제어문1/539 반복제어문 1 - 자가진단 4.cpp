#include <stdio.h>
int main() {
	int a, count=0;
	int sum = 0;
	double avg;
	while (1) {
		scanf("%d", &a);
		sum += a;		//sum = sum + a
		count++;
		if (a >= 100)
			break;
	}
	avg = (double)sum / count;

	printf("%d \n", sum);
	printf("%.1f \n", avg);

	return 0;
}
