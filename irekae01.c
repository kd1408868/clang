#include<stdio.h>
main()
{
	int a, b, w;
	a = 5, b = 3;
	printf("a=%d\tb=%d\n", a, b);
	w = a;
	a = b;
	b = w;
	printf("����ւ���\na=%d\tb=%d\n", a, b);

}