#include <stdio.h>
int main() {
	int score[10];
	int sum = 0, sum1 = 0;
	double avg;
	int i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &score[i]);
	}
	for (i = 1; i < 10; i+=2) {
		sum += score[i];
	}
	for (i = 0; i < 10; i+=2) {
		sum1 += score[i];
		avg = sum1 / 5.0;
	}
	
	printf("sum : %d\n", sum);
	printf("avg : %.1f\n", avg);

	return 0;
}
