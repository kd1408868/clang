//1101005kadai124.c

#include<stdio.h>
main()
{
	char c, * c_p = &c;
	printf("1�������́F");
	scanf("%c", &c);

	printf("���̕�����%c\n", *c_p + 1);
}