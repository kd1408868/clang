//1101005kadai12h.c

#include<stdio.h>
main()
{
	char d[20] = { "kadai12h.c" };
	char* p;
	p = &d[0];
	printf("�z����e�́�");
	for (; *p != '\0'; *p++) {
		putchar(*p);
	}
	printf("\n");
}