//1101005kadai041.c

#include<stdio.h>
main()
{
	int i,sum,suu;
	i = 0;
	suu = 0;
	sum = 0;

	while (i != -999) {

		sum += i;
		printf("整数：（-999で終了）");
		scanf("%d", &i);

		suu+=1;
	}

	printf("合計＝%d\n平均＝%d\n", sum, sum / suu);

}