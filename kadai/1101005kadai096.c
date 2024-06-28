//1101005kadai096.c

#include<stdio.h>
main()
{
	int suu[10], i, cnt;

	for (cnt = 0, i = 0; i < 10; cnt++, i++)
	{
		printf("整数（-999で終了）:");
		scanf("%d", &suu[i]);

		if (suu[i] == -999) {
			break;
		}

	}

	printf("配列suu=");
	
	for (i = 0; i < cnt; i++) {
		printf("%d ", suu[i]);
	}

	printf("\n");
}