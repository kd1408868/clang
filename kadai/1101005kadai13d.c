//1101005kadai13d.c

#include<stdio.h>
void connect(char* p1, char* p2);
main()
{
	char moji1[256] = "関数", moji2[256] = "わかるかな？";

	char* p_m1 = &moji1[0], * p_m2 = &moji2[0];

	printf("配列 moji1=%s\n", p_m1);
	printf("配列 moji2=%s\n", p_m2);

	connect(p_m1, p_m2);
	p_m1 = &moji1[0];

	printf("連結された後の文字列：%s\n", p_m1);
}

void connect(char* p1, char* p2)
{
	for (; *p1 != '\0';p1++);
	for (; *p2 != '\0'; p1++, p2++)
	{
		*p1 = *p2;
	}
	return;
}