#include <stdio.h>
int main() {
	char a[10];
	char i;

	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}
	printf("%c %c %c", a[0], a[3], a[6]);
	return 0;
}
