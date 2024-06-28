//1101005kadai138.c

#include<stdio.h>
void kome(int a);

main()
{
	int a;
	printf("®”G");
	scanf("%d",&a);

	kome(a);
}

void kome(int a)
{
	int i;
	for (i = 0; i < a; i++) 
	{
		printf("*");

	}
	printf("\n");
	return;
}