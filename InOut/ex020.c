#include<stdio.h>
main()
{
	char moji;
	printf("1文字入力:");
	scanf("%c.", &moji);
	printf("大文字に変換して %c\n ", moji - 32);
}