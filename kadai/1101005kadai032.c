//1101005 kadai032.c

#include<stdio.h>
main()
{
	int i1, i2;
	printf("整数を入力：");
	scanf("%d", &i1);

	i2 = i1 % 2;

	if (i2 == 0) {
		printf("その数は「偶数」です。\n");
	}
	else {
		printf("その数は「奇数」です。\n");

	}
}