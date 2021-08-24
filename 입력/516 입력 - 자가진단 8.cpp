#include <stdio.h>
#pragma warning(disable :4996)
int main() {
	double a, b;
	char c;
	scanf("%lf %lf %c", &a, &b, &c);
	printf("%.2lf\n%.2lf\n%c\n", a, b, c);
	return 0;
}
