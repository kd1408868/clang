#include<stdio.h>
main()
{
	int i1, i2;
	float gokei,hei,x[3][2];

	for (i1 = 0, gokei = 0; i1 < 3; i1++) {

		for (i2 = 0, gokei = 0; i2 < 2; i2++) {
			printf("x[%d][%d]=",i1,i2);
			scanf("%f", &x[i1][i2]);

			gokei += x[i1][i2];
			
		}

		hei =gokei / (float)i2;

		printf("%ds–Ú‚Ì•½‹Ï‚Í%.2f\n\n",i1, hei);
	}
}