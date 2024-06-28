//1101005 kadai091.c

#include<stdio.h>
main()
{
	int i = 1;
	double a[10] = {
		0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 
	};

	printf("double a[10] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9}\n");

	for (i = 0; i < 10; i++) {
		printf("a[%d]=%f\n", i, a[i]);
	}
}
