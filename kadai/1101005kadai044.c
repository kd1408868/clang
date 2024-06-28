//1101005kadai044.c

#include<stdio.h>
main()
{
	int i;
	i = 0;

	while (i != -999) {

		printf("整数（－９９９で終了）：");
		scanf("%d", &i);

		if (i != -999) {
			printf("8進数＝%o\t16進数＝%X\n",i,i);
		}

	}
	printf("\n");
}