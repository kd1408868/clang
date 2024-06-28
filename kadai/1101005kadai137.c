//1101005kadai137.c

#include<stdio.h>
int moji(char c);
main()
{
	char c;
	int i;

	printf("アルファベット１文字：");
	c=getchar();

	i = moji(c);

	if (i == 1) {
		printf("戻り値は%dなので、入力した文字は大文字です。\n", i);
	}
	if (i == 0) {
		printf("戻り値は%dなので、入力した文字は小文字です。\n", i);
	}

}

int  moji(char c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	if ('a' <= c && c <= 'z') 
	{
		return (0);
	}
}
