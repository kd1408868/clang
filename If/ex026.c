#include<stdio.h>
main()
{
	int n;
	printf("������́F");
	scanf("%d", &n);

	if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12) {
		printf("�ŏI����31���ł��B\n");
	}

	else {

		if (n == 2) {
			printf("�ŏI����28���ł��B\n");
		}

		else {
			printf("�ŏI����30���ł��B\n");
		}
	}
}