#include<stdio.h>
#define DCNT 8
int	MAX(int data[]);
int	MIN(int data[]);

main() 
{
	int data[DCNT] = { 6,10,8,2,9,5,1,7 };
	int max, min;

	max= MAX(data);
	min = MIN(data);

	printf("Å‘å’l%d\nÅ¬’l%d\n", max, min);

}

int MAX(int data[])
{
	int i;
	int max;

	max = data[0];
	for (i = 0; i < DCNT-1; i++)
	{
		if (max < data[i + 1])
		{
			max = data[i + 1];
		}
	}
	return(max);
}

int	MIN(int data[])
{
	int i;
	int min;

	min = data[0];
	for (i = 0; i < DCNT - 1; i++)
	{
		if (min > data[i + 1])
		{
			min = data[i + 1];
		}
	}
	return(min);
}
