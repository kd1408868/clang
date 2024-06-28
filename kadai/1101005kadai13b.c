//1101005kadai13b.c

#include<stdio.h>
void test(void);
main()
{
	test();
}

void test(void)
{
	char c[256] = {"test program"};
	printf("%s\n",c);
	return;
}