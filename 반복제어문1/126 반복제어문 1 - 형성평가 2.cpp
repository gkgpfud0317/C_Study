#include <stdio.h>
int main() {
	int odd = 0, even = 0, num;

	while (1) {
		scanf("%d", &num); // odd:È¦¼ö even : Â¦¼ö

		if (num == 0)
			break;
		if (num % 2 == 1)	// if (num % 2)	// % : ¸ðµâ¶ó
			odd++;
		else
			even++;
	}
	printf("odd : %d \n", odd);
	printf("even : %d", even);
	return 0;
}
