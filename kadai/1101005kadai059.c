//1101005 kadai059.c

#include<stdio.h>
main()
{
	int suu, i;

	printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
	printf("==========================================================================\n");

	for (i = 1; i < 10; i++) {
		printf("%d |\t",i);
		for (suu = 1; suu < 10; suu++) {
			printf("%d\t", i * suu);
		}
		printf("\n");
	}

}