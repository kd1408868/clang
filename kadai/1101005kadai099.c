//1101005kadai099.c

#include<stdio.h>
main()
{
	int cnt,i;
	char data[100];

	printf("�񐔂ƕ��������́F");
	scanf("%d%s", &cnt, &data[0]);

	for (i = 0; i < cnt; i++) {
		printf("%s\t", data);
	}
	printf("\n");
}