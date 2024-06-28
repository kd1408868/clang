//1101005kadai123.c

#include<stdio.h>
main()
{
	double a, b, * p_a = &a, * p_b = &b;

	printf("実数値１：");
	scanf("%lf", &a);
	printf("実数値2：");
	scanf("%lf", &b);
	printf("a=%.3f b=%.3f\n", *p_a, *p_b);

	if (a >= b) {
		if (a > b) {
			printf("大きい方は%f\n", *p_a);
		}
		else{
			printf("2数は等しい\n");
		}
		

	}
	else {
		printf("大きい方＝%f\n", *p_b);
	}



}