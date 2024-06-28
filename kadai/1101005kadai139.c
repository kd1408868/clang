//1101005kadai139.c

#include<stdio.h>
void kome(int a,char c);

main()
{
	int a;
	char c;
	printf("•¶šG");
	scanf("%c", &c);
	printf("®”G");
	scanf("%d",&a);

	kome(a,c);
}

void kome(int a,char c)
{
	int i;
	for (i = 0; i < a; i++) 
	{
		printf("%c",c);

	}
	printf("\n");
	return;
}