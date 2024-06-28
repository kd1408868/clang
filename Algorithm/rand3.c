#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k,i;

	srand(time(0));
	for (i = 0; i < 10; i++) {
	k = rand();
	k = rand() % 71 + 1;
		if (k <= 30) {
			printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«I\n");
		}
		else {
			printf("’ÊíUŒ‚\n");
		}
	}
}
