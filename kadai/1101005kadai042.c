//11010055kadai042.c

#include<stdio.h>
main()
{
	int i, sum;
	i = 1;
	sum = 0;


	while (sum < 300) {
		
		printf("%d+", i);
		i += 1;
		sum += i;
	
	}
	printf("%d=%d\n",i, sum);

}