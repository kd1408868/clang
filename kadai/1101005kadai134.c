//1101005kaadai134.c

#include<stdio.h>
main()
{
	char c[256];

	printf("文字列入力：");

	while (scanf("%s", &c[0]) != EOF)
	{
		printf("%s\n", c);
		printf("文字列入力：");
	}


}