//1101005kadai136.c

#include<stdio.h>
int max(int a, int b);

main()
{
	int a, b, c;
	printf("2‚Â‚Ì®”?");
	scanf("%d%d", &a, &b);
	c = max(a, b);
	printf("max=%d\n", c);
}

int max(int a,int b)
{
	int c;
	if (a >= b)
	{
		c = a;
	}
	else {
		c = b;

	}
	return(c);
}