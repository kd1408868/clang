//1101005kadai096.c

#include<stdio.h>
main()
{
	int suu[10], i, cnt;

	for (cnt = 0, i = 0; i < 10; cnt++, i++)
	{
		printf("�����i-999�ŏI���j:");
		scanf("%d", &suu[i]);

		if (suu[i] == -999) {
			break;
		}

	}

	printf("�z��suu=");
	
	for (i = 0; i < cnt; i++) {
		printf("%d ", suu[i]);
	}

	printf("\n");
}