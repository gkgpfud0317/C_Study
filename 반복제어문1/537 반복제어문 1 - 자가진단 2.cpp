#include <stdio.h>
int main() {
	int sum = 0, num = 1, a;
	scanf("%d", &a);
	while (num <= a) {
		sum = sum + num;		//sum += num
		num++;
	}
	printf("%d \n", sum);

	return 0;
}
