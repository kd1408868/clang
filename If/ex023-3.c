#include<stdio.h>
main()
{
	int a, b, c;
	
	printf("演算子を入力：");
	scanf("%d", &a);
	printf("2つの整数を入力：");
	scanf("%d %d", &b, &c);

	if (a == 1) {
		printf("%d\n", b + c);
	}

	else {
		if (a == 2) {
			printf("%d\n", b - c);
		}

		else {
			if (a == 3) {
				printf("%d\n", b * c);
			}

			else{
				if (a == 4) {
					printf("%.2f\n", (float)b / (float)c);

				}
			}
		}
	}
}