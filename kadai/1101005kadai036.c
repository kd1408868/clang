//1101005 kadai036.c

#include<stdio.h>
main()
{
	int i1, i2;

	printf("����1�F");
	scanf("%d", &i1);
	printf("����2�F");
	scanf("%d", &i2);

	if (i1 >= i2) {
		if (i1 > i2) {
			printf("%d�̕���%d���%d�傫���B\n", i1, i2, i1 - i2);
		}
		else {
			printf("%d��%d�͓������B\n", i1, i2);
		}
	}
	else {
		printf("%d�̕���%d���%d�������B\n", i1, i2, i2-i1);
	}

}