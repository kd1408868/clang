#include<stdio.h>
main()
{
	char m1, m2;
	printf("���������:");
	scanf("%c", &m1);

	if ('A'<=m1&&m1 <= 'Z') {
		printf("�啶���ł��B\n");
	}
	else {
		printf("���̑��ł��B\n");
	}

	printf("���������:");
	scanf("%*c%c", &m2);

	if ('A'<=m2&&m2<='Z') {
		printf("�啶���ł��B\n");
	}
	else {
		printf("���̑��ł��B\n");
	}
}