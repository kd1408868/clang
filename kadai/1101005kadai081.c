//1101005kadai081.c

#include<stdio.h>
main()
{
	int suu, sum,i;

	suu = 0;
	sum = 0;
	i = 0;

	while (1) {
		sum = sum + suu;
		printf("整数（-999で終了）：");
		scanf("%d", &suu);

		if (suu == -999) {
			break;
		}
		i++;
	}

	printf("合計＝%d\t平均＝%.3f\n", sum, (float)sum / i);
}