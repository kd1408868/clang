//1101005kadai052.c

#include<stdio.h>
main()
{
	int i1, i2;
	i2 = 0;


	for (i1 = 1; i1 <= 60; i1++)
	{
		printf("%d ", i1);
		i2++;

		if (i2 == 20) {
			printf("\n");

			i2 = 0;
		}


	}

}