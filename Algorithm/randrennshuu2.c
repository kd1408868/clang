#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int b;
	srand(time(0));
	b = rand();
	b = rand() % 41 + 10;
	printf("‚‚‚Í%d‚Å‚·\n", b);
}