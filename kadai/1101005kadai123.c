//1101005kadai123.c

#include<stdio.h>
main()
{
	double a, b, * p_a = &a, * p_b = &b;

	printf("�����l�P�F");
	scanf("%lf", &a);
	printf("�����l2�F");
	scanf("%lf", &b);
	printf("a=%.3f b=%.3f\n", *p_a, *p_b);

	if (a >= b) {
		if (a > b) {
			printf("�傫������%f\n", *p_a);
		}
		else{
			printf("2���͓�����\n");
		}
		

	}
	else {
		printf("�傫������%f\n", *p_b);
	}



}