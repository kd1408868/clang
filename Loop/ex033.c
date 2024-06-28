#include<stdio.h>
main()
{
	int i,num,sum;

	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &num);

	for (sum = 0, i = 0; num != -999; i++) {
		sum += num;
		printf("”‚ğ“ü‚ê‚ÄF");
		scanf("%d", &num);
	}
	printf("‡Œv%d •½‹Ï%.2f\n", sum, (float)sum / i);
}