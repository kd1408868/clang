//1101005 kadai02a.c

#include<stdio.h>
main()
{
	double d1, d2;

	printf("2‚Â‚ÌÀ”’lF");
	scanf("%lf %lf", &d1, &d2);

	printf("****%f‚Æ%f‚Ìl‘¥‰‰Z****\n", d1, d2);
	printf("˜a%f ·%f Ï%f ¤%f\n", d1 + d2, d1 - d2, d1 * d2, d1 / d2);
}