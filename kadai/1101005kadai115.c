//1101005kadai115.c

#include<stdio.h>
main()
{
	char moji[256];
	int i=0;
	printf("������́H");
	scanf("%s", &moji[0]);

	printf("\n���͂����������\n");
	while (moji[i] != '\0')
	{
		putchar(moji[i]);
		printf("\n");
		i++;
	}

}