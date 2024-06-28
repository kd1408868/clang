#include<stdio.h>
main()
{
	int a[3] = { 10,20,30 };
	int* p = a;

	printf("p[1]=%d\n", p[1]);
	printf("*(a+1)=%d\n", *(a + 1));

}