//1101005 kadai037.c

#include<stdio.h>
main()
{
	int i;
	printf("1~100までの整数：");
	scanf("%d", &i);

	if (i >= 30) {

		if (i >= 50) {

			if (i >= 80) {

				if (i >= 90) {
					printf("その数値の判定結果は「5」です。\n");
				}
				else {
					printf("その数値の判定結果は「4」です。\n");
				}
			}
			else {

				printf("その数値の判定結果は「3」です。\n");
			}
		}
		else {
			printf("その数値の判定結果は「2」です。\n");
		}
	}
	else {
		printf("その数値の判定結果は「1」です。\n");
	}
}