#include <stdio.h>
int main() {
	char a;
	int b;
	scanf("%c %d", &a, &b);

	if (a == 'M') {
		if (b >= 18)
			printf("MAN");
		else
			printf("BOY");
	}
	else if (a == 'F') {
		if (b >= 18)
			printf("WOMAN");
		else
			printf("GIRL");
	}
	return 0;
}

