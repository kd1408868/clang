#include<stdio.h>
main()
{
	int a;
	printf("�b������́F");
	scanf("%d", &a);
	if (a <= 5000) {
		int h, n, s;
		h = a / 3600, n = a % 3600 / 60, s =a % 3600 % 60;
		printf("%d����%d��%d�b�ł��B\n", h, n, s);
	}
	else{
		printf("ERROR\n");
	}
}