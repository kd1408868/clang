//1101005kadai131.c

#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	printf("�����F(^Z�ŏI��)\n");
	c = getchar();
	
	while (c != EOF) {
		putchar(c);
		printf("\n�����F(^Z�ŏI��)\n");
		gets(dumy);
		c = getchar();
	}
}