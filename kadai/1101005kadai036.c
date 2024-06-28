//1101005 kadai036.c

#include<stdio.h>
main()
{
	int i1, i2;

	printf("整数1：");
	scanf("%d", &i1);
	printf("整数2：");
	scanf("%d", &i2);

	if (i1 >= i2) {
		if (i1 > i2) {
			printf("%dの方が%dより%d大きい。\n", i1, i2, i1 - i2);
		}
		else {
			printf("%dと%dは等しい。\n", i1, i2);
		}
	}
	else {
		printf("%dの方が%dより%d小さい。\n", i1, i2, i2-i1);
	}

}