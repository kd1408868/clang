#include<stdio.h>
main()
{
	char m;
	printf("��������́F");
	scanf("%c", &m);

	if ('A' <= m && m <= 'z') {
		if ('A' <= m && m <= 'Z') {
			printf("�ϊ������%c\n", m + 32);
		}
		else {
			printf("�ϊ������%c\n", m - 32);
		}
	}
	else {
		printf("ERROR\n");
	}
}