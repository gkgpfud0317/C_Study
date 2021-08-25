#include <stdio.h>
int main() {
	int n, sum = 0, score;
	double avg;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &score);
		sum += score;
	}
	avg = (double)sum / n;
	printf("avg : %.1lf \n", avg);
	if (avg >= 80)
		printf("pass");
	else
		printf("fail");
	return 0;
}
