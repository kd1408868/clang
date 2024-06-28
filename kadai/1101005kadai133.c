//1101005kadai133.c

#include<stdio.h>
main()
{
	int suu, max, min;
	

	printf("数を入力（EOFで終了）：");
	scanf("%d", &suu);
	max = suu, min = suu;
	printf("数を入力（EOFで終了）：");


	while (scanf("%d", &suu) != EOF)
	{
		if (suu > max) {
			max = suu;
		}
		if (suu < min) {
			min = suu;
		}
		printf("数を入力：（EOFで終了）");
	}

	printf("max＝%d\nmin＝%d\n", max, min);
}