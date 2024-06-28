#include<stdio.h>
main()
{
	char m1, m2;
	printf("文字を入力:");
	scanf("%c", &m1);

	if ('A'<=m1&&m1 <= 'Z') {
		printf("大文字です。\n");
	}
	else {
		printf("その他です。\n");
	}

	printf("文字を入力:");
	scanf("%*c%c", &m2);

	if ('A'<=m2&&m2<='Z') {
		printf("大文字です。\n");
	}
	else {
		printf("その他です。\n");
	}
}