//1101005kadai13a.c

#include<stdio.h>
long int beki(int a, int b);
main()
{
	int a, b;
	long int kotae;

	printf("���l�P�H");
	scanf("%d", &a);

	printf("���l�Q�H");
	scanf("%d", &b);

	kotae = beki(a, b);

	printf("%d��%d���%ld\n",a,b,kotae);
}

long int beki(int a, int b)
{
	int i, bekijou;

	bekijou = a;
	for (i = 1; i < b; i++)
	{
		bekijou *= a;
	}

	return(bekijou);
}