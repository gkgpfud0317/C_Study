#include <stdio.h>
int main() {
	int i, j, sum = 0, cnt = 0, num, avg;
	for (i = 0; i < 20; i++) {
		scanf("%d", &num);
		if (num == 0)
			break;
		else {
			sum += num;
			cnt++;
		}
		avg = sum / cnt;
	}
	printf("%d %d", sum, avg);
	return 0;
}
