#include <stdio.h>
int main() {
	double class[8] = { 0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	double sum = 0;
	int i, j;
	scanf("%d %d", &i, &j);
	sum = class[i] + class[j];
	printf("%.1lf", sum);
}
