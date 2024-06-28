//1101005kadai13c.c

#include<stdio.h>
void kansuu(int* p1, int* p2);
main()
{
	int a = 10, b = 20;
	int* p_a = &a, * p_b = &b;

	printf("関数実行前の値：\n");
	printf("%d\t%d\n", *p_a, *p_b);

	kansuu(p_a, p_b);

	printf("関数実行前の値：\n");
	printf("%d\t%d\n", *p_a, *p_b);
}

void kansuu(int* p1, int* p2)
{
	int w;
	w = *p1;
	*p1 = *p2;
	*p2 = w;
	return;
}