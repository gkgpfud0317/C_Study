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
			continue;		//����ϴ�
		sum += num;
		count++;
	}
	avg = sum / count;
	printf("Ȧ���� �� = %d \n", sum);
	printf("Ȧ���� ��� = %d \n", avg);
	return 0;
}
