#include <stdio.h>
int main() {
	float weight;
	scanf("%f", &weight);

	if (weight > 88.45)
		printf("Heavyweight");
	else if (weight > 72.57)
		printf("Cruiserweight");
	else if (weight > 61.23)
		printf("Middleweight");
	else if (weight > 50.80)
		printf("Lightweight");
	else
		printf("Flyweight");

	return 0;
}
