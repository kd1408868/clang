//1101005 kadai034.c

#include<stdio.h>
main()
{
	char c;
	printf("�ꕶ�����́F");
	scanf("%c", &c);

	if ('A' <= c && c <= 'z') {
		if ('A' <= c && c <= 'Z') {
			printf("���̕����́h�啶���h�ł��B\n");
		}
		else {
			printf("���̕����́h�������h�ł��B\n");
		}
	}
	else {
		printf("ERROR\n");
	}
}