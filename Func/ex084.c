#include<stdio.h>
void sort(char* s1, char* s2);

main()
{
	char str1[256], str2[256];
	printf("���������́F");
	gets(str1);
	sort(str1,str2);

	printf("str1:%s\nstr2:%s\n", str1, str2);

}

void sort(char *s1,char*s2)
{
	int i, j;
	
	for (i = 0; *(s1+i) != '\0'; i++);

	for (i = i - 1, j = 0; i >= 0; i--, j++)
	{
		*(s2 + j) = *(s1 + i);
	}
	*(s2 + j) = '\0';

}