//1101005kadai097.c

#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	int i, i1, i2;

	for (i1 = 9, i2 = 0; i1 >= 0; i1--, i2++)
	{
		c[i2] = a[i1];
	}

	printf("”z—ñ a=");

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	printf("\n”z—ñ c=");

	for (i = 0; i < 10; i++) {
		printf("%d ", c[i]);
	}

	printf("\n");
}