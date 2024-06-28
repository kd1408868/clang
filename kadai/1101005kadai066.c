//1101005 kadai066.c

#include<stdio.h>
main()
{
	int i, sum;
	sum = 0;
	i = 0;

	do {
		i++;
		sum += i;
		printf("%d+", i);

	} while (sum < 300);
	i++;
	sum += i;
	printf("%d=%d\n", i, sum);
}