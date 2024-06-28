//1101005kadai098.c

#include<stdio.h>
main()
{
	int  data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int i,max, min;

	for (i = 1; i < 10; i++)
	{
		if (data[i] > data[i - 1])
		{
			max = data[i];
		}
		else
		{
			min = data[i];
		}
		
	}

	printf("”z—ñ data=");

	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}


	printf("\nÅ‘å’l%d  Å¬’l%d\n", max, min);
}