#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int c;

	srand(time(0));
	c = rand();
	c = rand() % 301 - 100;
	printf("c��%d�ł�\n", c);

}