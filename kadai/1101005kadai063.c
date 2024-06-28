//1101005kadai063.c

#include<stdio.h>
main()
{
	int suu, num;
	suu = 1;
	num = 10;
	while (suu < 21){
		printf("%d\t", suu);
		suu++;
		num--;
		if (num == 0) {
			printf("\n");
			num = 10;
		}
	}
}