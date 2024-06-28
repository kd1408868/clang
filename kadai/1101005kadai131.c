//1101005kadai131.c

#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	printf("整数：(^Zで終了)\n");
	c = getchar();
	
	while (c != EOF) {
		putchar(c);
		printf("\n整数：(^Zで終了)\n");
		gets(dumy);
		c = getchar();
	}
}