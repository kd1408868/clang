//1101005 kadai033.c

#include<stdio.h>
main()
{
	char c;
	printf("�A���t�@�x�b�g�F");
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
		printf("���̕����́h�A���t�@�x�b�g�ł͂Ȃ��h�ł��B\n");
	}
}