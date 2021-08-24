#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);

	switch (a)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31\n");
		break;
	case 2:
		printf("28\n");
		break;
	default:
		printf("30\n");
		break;
	}
	return 0;
}
