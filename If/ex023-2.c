#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("西暦を入力:");
	scanf("%d", &a);
	b = a % 4;
	c = a % 100;
	d = a % 400;

	if (a < 0) {
		printf("ERROR");
	}

	else {

		if (b == 0 && c > 0) {
				printf("うるう年です。\n");
		}

		else {

			if (d == 0) {
				printf("うるう年です。\n");
			}

			else {
				printf("うるう年でない。\n");
			}
		}
	}
}