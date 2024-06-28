#include<stdio.h>
main()
{
	char m1, m2;
	printf("文字を入力:");
	scanf("%c", &m1);

	if ('A' <= m1 && m1 <= 'z') {
		printf("アルファベットです。\n");
	}
	else {
		if ('0' <= m1 && m1 <= '9') {
			printf("数字です。\n");
		}
		else {
			printf("その他です。\n");
		}
	}
}