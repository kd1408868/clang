//1101005kadai115.c

#include<stdio.h>
main()
{
	char moji[256];
	int i=0;
	printf("文字列は？");
	scanf("%s", &moji[0]);

	printf("\n入力した文字列は\n");
	while (moji[i] != '\0')
	{
		putchar(moji[i]);
		printf("\n");
		i++;
	}

}