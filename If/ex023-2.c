#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("��������:");
	scanf("%d", &a);
	b = a % 4;
	c = a % 100;
	d = a % 400;

	if (a < 0) {
		printf("ERROR");
	}

	else {

		if (b == 0 && c > 0) {
				printf("���邤�N�ł��B\n");
		}

		else {

			if (d == 0) {
				printf("���邤�N�ł��B\n");
			}

			else {
				printf("���邤�N�łȂ��B\n");
			}
		}
	}
}