#include<stdio.h>
main()
{
	int i1, i2, gokei;


	int a[][3] = { {10,20,30},{1,2,3} };

	for (gokei = 0, i1 = 0; i1 <= 1; i1++) {

		for (gokei = 0, i2 = 0; i2 <= 2; i2++) {
			printf("a[0][%d]=%d\n", i2, a[0][i2]);
			gokei += a[0][i2];
		}

		printf("%ds–Ú‚Ì‡Œv=%d\n\n", i1, gokei);

	}

}