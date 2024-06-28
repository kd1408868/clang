#include<stdio.h>
main()
{
	int  i1,i2,num;
	printf("”‚ÍH");
	scanf("%d", &num);
	i1= 1;

	

	do {
		i2 =i1;

		do {
			printf("*");
			i2--;
		} while (i2>0);

		printf("\n");
		i1++;
	} while (num>=i1);



}