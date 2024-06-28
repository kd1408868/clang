//1101005 kadai071.c

#include<stdio.h>
main()
{ 
	int i1, i2;
	char enn;

	printf("®”‚PF");
	scanf("%d", &i1);

	printf("®”‚QF");
	scanf("%d", &i2);

	printf("‰‰ZqF");
	scanf("%*c%c", &enn);

	switch (enn) {

	case	'+':printf("%d+%d=%d\n", i1, i2, i1 + i2);
		break;

	case	'-':printf("%d-%d=%d\n", i1, i2, i1 - i2);
			break;

	case	'*':printf("%d*%d=%d\n", i1, i2, i1 * i2);
			break;

	case	'/':printf("%d/%d=%d\n", i1, i2, i1 / i2);
			break;

	case	'%':printf("%d%%d=%d\n", i1, i2, i1 % i2);
			break;

	default:printf("ERROR\n");
	}
}