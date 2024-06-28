//1101005kadai132.c

#include<stdio.h>
main()
{
	int suu,sum, cnt;
	sum = 0;
	cnt = 0;

	printf("数を入力（EOFで終了）：");

	while (scanf("%d", &suu) != EOF)
	{
		sum += suu;
		cnt++;

		printf("数を入力：（EOFで終了）");
	
	}

	printf("合計＝%d\n平均＝%.1f\n", sum, (float)sum / cnt);
}