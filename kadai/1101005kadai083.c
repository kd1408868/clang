//1101005kadai083.c


#include<stdio.h>
main()
{
	int i,d;

	for (i = 1; ; i++) {

		if (i > 20)	break;

		d = i % 2;

		if (d == 0) {
			continue;
		}
		printf("%d ", i);

	}
	printf("\n");
}
