#include <stdio.h>
int main() {
	int num, i, sum = 0, count = 0;
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		if (i % 2 == 1){
			sum += i;
			count++;
			if (sum >= num)
				break;
		}
	}
	printf("%d %d\n", count, sum);

	return 0;
}
