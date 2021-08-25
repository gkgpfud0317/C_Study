#include <stdio.h>
int main() {
	int num[10];
	int min = 10000, max = 0;
	int i;

	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		if (num[i] > 100 && num[i] < min)
			min = num[i];
		if (num[i] < 100 && num[i] > max)
			max = num[i];
	}
	if (max == 0) max = 100;
	if (min == 10000) min = 100;
	printf("%d %d", max, min);
	return 0;
}
