#include<stdio.h>
#define DCNT 8
main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j, w, gap;
	
	for (gap =DCNT / 2; gap > 0; gap /= 2)
	{
		for (i =gap; i < DCNT; i++)
		{
			for (j = i - gap; j >= 0; j-=gap)
			{
				if (d[j + gap] < d[j])
				{
					w = d[j];
					d[j] = d[j + 1];
					d[j + 1] = w;
				}
				else {
					break;
				}
			}
		}
	}

	for (i = 0; i < DCNT; i++)
	{
		printf("d[%d]=%d\n", i, d[i]);
	}
}