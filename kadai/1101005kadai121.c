//1101005kadai121.c

#include<stdio.h>
main()
{
	int i1=100, i2=10;
	int* p1, * p2;

	p1 = &i1;
	p2 = &i2;
	printf("%d+%d=%d\n", *p1, *p2, *p1 + *p2);
	printf("%d-%d=%d\n", *p1, *p2, *p1 - *p2);
	printf("%d*%d=%d\n", *p1, *p2, *p1 * *p2);
	printf("%d/%d=%d\n", *p1, *p2, *p1 / *p2);
}