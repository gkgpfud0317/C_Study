#include <stdio.h>
#pragma warning (disable :4996)
int main() {
	float i;
	float j;
	double n;
	printf("������ �Ǽ��� �Է��Ͻÿ�.\n");
	scanf("%f %f %lf", &i, &j, &n);
	printf("%.3f\n", i);
	printf("%.3f\n", j);
	printf("%.3lf\n", n);
	return 0;
}
