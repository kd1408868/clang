//1101005 kadai038.c

#include<stdio.h>
main()
{
	char c;
	printf("�ꕶ�����́F");
	scanf("%c", &c);

	if ('A' <= c && c <= 'z') {
		if ('A' <= c && c <= 'Z') {
			printf("�ϊ����ʂ�%c\n", c + 32);
		}
		else {
			printf("�ϊ����ʂ�%c\n", c - 32);
		}
	}
	else {
		printf("�ϊ����ʂ�%c\n", c);
	}
}