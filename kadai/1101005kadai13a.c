//1101005kadai13a.c

#include<stdio.h>
long int beki(int a, int b);
main()
{
	int a, b;
	long int kotae;

	printf("数値１？");
	scanf("%d", &a);

	printf("数値２？");
	scanf("%d", &b);

	kotae = beki(a, b);

	printf("%dの%d乗は%ld\n",a,b,kotae);
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