//1101005kadai129.c

#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int w;
	int* p_a, * p_b;
	p_a = &a[9];
	p_b = &b[0];

	for (int i = 0; i < 10; i++,  p_a--, p_b++) {
		*p_b = *p_a;
	}

	p_a = &a[0];
	p_b = &b[0];

	printf("”z—ña=");
	for (; *p_a != 0; p_a++) {
		printf("%d ", *p_a);
	}
	printf("\n");


	printf("”z—ñb=");
	for (; *p_b != 0; p_b++) {
		printf("%d ", *p_b);
	}
	printf("\n");
}