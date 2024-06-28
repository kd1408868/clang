#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int suu,i;

	srand(time(0));
	for (i = 1; i <= 100; i++) {
		suu = rand();
		suu = rand() % 300 + 1;
		printf("%d %d\n",i, suu);
	}
}