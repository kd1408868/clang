//1101005 kadai035.c

#include<stdio.h>
main()
{
	int i;
	printf("整数を入力：");
	scanf("%d", &i);

	if (i >= 0) {
		if (i > 0) {
			printf("入力値は「プラス」です。\n");
		}
		else {
			printf("入力値は「0」です。\n");
		}
	}
	else {
		printf("入力値は「マイナス」です。\n");
	}
}