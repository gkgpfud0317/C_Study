#include <stdio.h>
int main() {
	double yard;
	printf("yard? ");
	scanf("%lf", &yard);
	printf("%.1lfyard = %.1lfcm", yard, yard * 91.44);

}
