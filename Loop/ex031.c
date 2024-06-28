#include<stdio.h>
main()
{
	int a, sum;
	sum = 0;
	/*for (a = 1; a <= 10; a++) {
		sum += a;
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a%d\n", a, sum);
	}*/
	a = 1;
	while (a < 11) {
		sum += a;
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a%d\n", a, sum);
		a++;
	}
}