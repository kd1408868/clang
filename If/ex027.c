#include<stdio.h>
main()
{
	char m;
	printf("文字を入力：");
	scanf("%c", &m);

	if ('A' <= m && m <= 'z') {
		if ('A' <= m && m <= 'Z') {
			printf("変換すると%c\n", m + 32);
		}
		else {
			printf("変換すると%c\n", m - 32);
		}
	}
	else {
		printf("ERROR\n");
	}
}