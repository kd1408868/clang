//1101005 kadai034.c

#include<stdio.h>
main()
{
	char c;
	printf("一文字入力：");
	scanf("%c", &c);

	if ('A' <= c && c <= 'z') {
		if ('A' <= c && c <= 'Z') {
			printf("その文字は”大文字”です。\n");
		}
		else {
			printf("その文字は”小文字”です。\n");
		}
	}
	else {
		printf("ERROR\n");
	}
}