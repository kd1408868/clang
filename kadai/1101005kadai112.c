//1101005kadai112.c

#include<stdio.h>
main()
{
	char a[6] = {"abcde"}, b[6];
	int i;
	for (i = 0; i < 6; i++)
	{
		b[i] = a[i];
	}

	printf("コピー元 a[]=");
	for (i = 0; i<6; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");

	printf("コピー先 b[]=");
		for (i = 0; i < 6; i++)
		{
			printf("%c", b[i]);
		}
	printf("\n");
}