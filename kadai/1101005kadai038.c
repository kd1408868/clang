//1101005 kadai038.c

#include<stdio.h>
main()
{
	char c;
	printf("一文字入力：");
	scanf("%c", &c);

	if ('A' <= c && c <= 'z') {
		if ('A' <= c && c <= 'Z') {
			printf("変換結果は%c\n", c + 32);
		}
		else {
			printf("変換結果は%c\n", c - 32);
		}
	}
	else {
		printf("変換結果は%c\n", c);
	}
}