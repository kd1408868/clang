//1101005kadai12g.c

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

	int c[5][5];

	int i,j,wk, * p_a, * p_c;
	p_a = &a[4][4];
	p_c = &c[0][0];

	for (i = 0; i < 25; i++)
	{
		*p_c = *p_a;
		p_a--;
		p_c++;
	}

	printf("”z—ñc\n");
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; *p_c++, j++)
			{
				printf("%d\t", *p_c);
			}
			printf("\n");
		}
}