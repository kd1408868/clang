//1101005 kadai056.c

#include<stdio.h>
main()
{
	char c;
	printf("アルファベット小文字：");
	scanf("%c", &c);

	for (c; c <= 'z'; c++) {
		printf("%c ",c);
	}
	printf("\n");
}