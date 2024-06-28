//1101005kadai064.c

#include<stdio.h>
main()
{
	int suu, num;
	suu = 20;
	num = 10;
	while (suu >0) {
		printf("%d\t", suu);
		suu--;
		num--;
		if (num == 0) {
			printf("\n");
			num = 10;
		}
	}
}