//1101005kadai099.c

#include<stdio.h>
main()
{
	int cnt,i;
	char data[100];

	printf("回数と文字列を入力：");
	scanf("%d%s", &cnt, &data[0]);

	for (i = 0; i < cnt; i++) {
		printf("%s\t", data);
	}
	printf("\n");
}