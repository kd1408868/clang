//1101005kadai133.c

#include<stdio.h>
main()
{
	int suu, max, min;
	

	printf("������́iEOF�ŏI���j�F");
	scanf("%d", &suu);
	max = suu, min = suu;
	printf("������́iEOF�ŏI���j�F");


	while (scanf("%d", &suu) != EOF)
	{
		if (suu > max) {
			max = suu;
		}
		if (suu < min) {
			min = suu;
		}
		printf("������́F�iEOF�ŏI���j");
	}

	printf("max��%d\nmin��%d\n", max, min);
}