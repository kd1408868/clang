//1101005kadai114.c

#include<stdio.h>
main()
{
	char moji[256];
	int i=0;
	printf("文字列は？");
	scanf("%s", &moji[0]);

	printf("\n入力した文字列は");
	while (moji[i] != '\0')
	{
		printf("%c", moji[i]);
		i++;
	}
	printf("\n文字数は%d\n", i);

}