#include<stdio.h>
main()
{
	int a, b;
	a = 5, b = 3;
	printf("a=%d\tb=%d\n", a, b);
	a = a + b;
	b = b - a;
	b = 0 - b;
	a = a - b;
	printf("����ւ���\na=%d\tb=%d\n", a, b);
}