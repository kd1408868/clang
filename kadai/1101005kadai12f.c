//1101005kadai12f.c

#include<stdio.h>
main()
{
	int a[][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};

	int b[][5] = {
		{3,6,9,12,15},
		{18,21,24,27,30},
		{33,36,39,42,45},
		{48,51,54,57,60},
		{63,66,69,72,75}
	};

	int i,j,wk, * p_a, * p_b;
	p_a = &a[0][0];
	p_b = &b[0][0];

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			wk = a[i][j];
			a[i][j] = b[i][j];
			b[i][j] = wk;
		}
	}

	printf("�z��a\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; *p_a++, j++)
		{
			printf("%d\t",*p_a);
		}
		printf("\n");
	}

	printf("\n\n�z��b\n");
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; *p_b++, j++)
			{
				printf("%d\t", *p_b);
			}
			printf("\n");
		}
}