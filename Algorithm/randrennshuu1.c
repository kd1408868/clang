#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a;

	srand(time(0));
	a = rand();
	a = rand() % 99;
	printf("a‚Í%d‚Å‚·\n", a);

}