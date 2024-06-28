#include<stdio.h>
void daishou(int, int,int, int*, int*);

main() {
	int a, b, c, d, e;
	printf("3‚Â‚Ì®”F");
	scanf("%d%d%d", &a,&b,&c);
	
	daishou(a, b, c, &d, &e);

	printf("Å‘å=%d Å¬=%d\n", d, e);
}

void daishou(int x, int y, int z, int* max, int* min)
{
	if (x >=y) 
	{
		if (x >= z) {
			if (y >= z)
			{
				*max = x;
				*min = z;
			}
			else
			{
				*max= x;
				*min = y;
			}
		}
		else
		{
			*max= z;
			*min= y;
		}
	}

	else
	{
		if (y >= z) {
			if (x >= z)
			{
				*max = y;
				*min = z;
			}
			else
			{
				*max = y;
				*min = x;
			}
		}

		else
		{
			*max =  z;
			*min =  x;
		}
	}
}