#include<stdio.h>
main()
{
	int a, b;
	a = 0;
	printf("数を入れて：");
	scanf("%d", &b);

	while (a < b) {
		printf("*");
		a += 1;
	}
	printf("\n");
}