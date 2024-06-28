//1101005kadai13e.c

#include<stdio.h>
int max(int* p);
int min(int* p);

main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50,-999 };

	int MAX, MIN;

	int* p_a = &a[0];

	MAX = max(p_a);
	MIN = min(p_a);

	printf("Å‘å’l%d\nÅ¬’l%d\n", MAX, MIN);

}



int max(int*p_a)
{
	int i;
	int AX;

	AX =*p_a;
	while(*p_a!=-999)
	{
		if (AX < *p_a)
		{
			AX = *p_a;
			
		}
		*p_a++;
	}
	
	return(AX);
}

int min(int* p_a)
{
	int i;
	int IN;

	IN =*p_a;
	while(*p_a != -999)
	{
		if (IN > *p_a)
		{
			IN = *p_a;
			
		}
		*p_a++;
	}
	
	return(IN);
}
