#include<stdio.h>
main()
{
	char  c, i;
	c = 32;
	i = 0;

	for (c; c <= 126; c++) {
		printf("%X %c ", (int)c, c);
		i++;
		for (i; i = 10; i = 0) {
			printf("\n");
		}
	}
	printf("\n");
}