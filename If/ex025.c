#include<stdio.h>
main()
{
	char m1, m2;
	printf("���������:");
	scanf("%c", &m1);

	if ('A' <= m1 && m1 <= 'z') {
		printf("�A���t�@�x�b�g�ł��B\n");
	}
	else {
		if ('0' <= m1 && m1 <= '9') {
			printf("�����ł��B\n");
		}
		else {
			printf("���̑��ł��B\n");
		}
	}
}