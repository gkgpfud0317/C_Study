#include <stdio.h>
int main() {
	int a[100];
	int i, cnt = 0;
	for (i = 0; i < 100; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0)
			break;
		else cnt++;
	}
	for (i = cnt - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	return 0;
}
