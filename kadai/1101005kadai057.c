//1101005 kadai057.c

#include<stdio.h>
main()
{
	char num,c;
	printf("�A���t�@�x�b�g�������F");
	scanf("%c", &num);
	c = num - 32;

	for (c; c <= 'Z'; c++) {
		printf("%c ", c);
	}
	printf("\n");
}