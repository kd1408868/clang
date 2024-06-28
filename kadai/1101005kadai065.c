//1101005 kadai065.c

#include<stdio.h>
main()
{
	int i1,i2, sum;
	sum = 0;
	i2 = 0;
	i1 = 0;
	do {
		sum += i1;
		i2++;
		printf("整数（-999で終了）？");
		scanf("%d", &i1);
	} while (i1 != -999);
	i2--;
	printf("合計＝%d\n平均＝%.2f\n", sum, (float)sum / i2);
}