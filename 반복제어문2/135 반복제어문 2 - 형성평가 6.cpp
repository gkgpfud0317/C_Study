#include <stdio.h>
int main() {
	int i, a, b, sum=0, cnt=0, min, max;
	scanf("%d %d", &a, &b);
	
	if (a > b) {
		min = b;
		max = a;
	}
	else {
		min = a;
		max = b;
	}
	for (i = min; i <= max; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
			cnt++;
		}
	}
	printf("sum : %d \n", sum);
	printf("avg : %.1f", (float)sum / cnt);
	return 0;
}
