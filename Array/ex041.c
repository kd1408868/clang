#include<stdio.h>
main()
{
	int i;
	float box[3], sum;

	for (sum = 0,i = 0; i <= 2; i++) {
		printf("実数を入力：");
		scanf("%f", &box[i]);

		sum += box[i];
	}
	printf("合計＝%.2f　平均＝%.2f\n",sum,sum/i);

}