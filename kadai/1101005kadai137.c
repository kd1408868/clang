//1101005kadai137.c

#include<stdio.h>
int moji(char c);
main()
{
	char c;
	int i;

	printf("�A���t�@�x�b�g�P�����F");
	c=getchar();

	i = moji(c);

	if (i == 1) {
		printf("�߂�l��%d�Ȃ̂ŁA���͂��������͑啶���ł��B\n", i);
	}
	if (i == 0) {
		printf("�߂�l��%d�Ȃ̂ŁA���͂��������͏������ł��B\n", i);
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
