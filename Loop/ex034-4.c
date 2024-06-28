#include<stdio.h>
main()
{
	int  i1, i2,i3, num;
	char sp;
	printf("”‚ÍH");
	scanf("%d", &num);
	i1 = 1;
	sp=' ';

	do {
		i2 = i1;

		i3 = num - i2;

		do {
			printf("%c", sp);
			i3--;
		} while (i3 >= 0);
	
		do {
			printf("*");
			i2--;
		} while (i2 > 0);

		printf("\n");
		i1++;
	} while (num >= i1);

}