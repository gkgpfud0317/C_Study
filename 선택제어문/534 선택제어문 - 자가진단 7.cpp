#include <stdio.h>
int main() {
	char a;
	scanf("%c", &a);
	switch (a)
	{
	case 'A':
		printf("Excellent \n");
		break;
	case 'B':
		printf("Good \n");
		break;
	case 'C':
		printf("Usually \n");
		break;
	case 'D':
		printf("Effort \n");
		break;
	case 'F':
		printf("Failure");
		break;
	default :
		printf("error");
	}
	return 0;
}
