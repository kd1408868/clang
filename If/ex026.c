#include<stdio.h>
main()
{
	int n;
	printf("月を入力：");
	scanf("%d", &n);

	if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12) {
		printf("最終日は31日です。\n");
	}

	else {

		if (n == 2) {
			printf("最終日は28日です。\n");
		}

		else {
			printf("最終日は30日です。\n");
		}
	}
}