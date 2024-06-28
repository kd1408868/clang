#include<stdio.h>
main()
{
	int i, d, sum, cnt;

	printf("整数：");
	d = scanf("%d", &i);

	sum = 0, cnt = 0;

	while (d != EOF)
	{
		sum += i;
		cnt++;
		printf("整数：");
		d = scanf("%d", &i);

	}
	printf("合計＝%d\t平均＝%.2f\n", sum, (float)sum / cnt);

	/*以下別解
	
	
		int i,d, sum, cnt;

		printf("整数：");

		while(scanf("%d", &i)!=EOF)
		{
			sum+=i;
			cnt++;
			printf("整数：");
		}
		printf("合計＝%d\t平均＝%.2f\n", sum, (float)sum / cnt);


	*/





}