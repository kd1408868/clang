//1101005 kadai031.c

#include<stdio.h>
main()
{
	float f1, f2;

	printf("2つの実数値：");
	scanf("%f %f", &f1, &f2);

	if (f1 > f2) {

		printf("大きい方は=%f\n", f1);

	}
	else {
		printf("大きい方は=%f\n", f2);
	}


}