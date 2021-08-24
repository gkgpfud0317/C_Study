#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Number? ");
	scanf("%d", &a);

	switch (a)
	{
		case 1:
			printf("dog \n");
			break;
		case 2:
			printf("cat \n");
			break;
		case 3:
			printf("chick \n");
			break;
		default:
			printf("I don't know.");
	}
	return 0;
}
