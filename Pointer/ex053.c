#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int* p_a, * p_b, * p_w;

	p_a = &a;
	p_b = &b;

	printf("���s�O�F*p_a=%d\t*p_b=%d\n", *p_a, *p_b);
	printf("p_a=%d\tp_b=%d\n", p_a, p_b);

	p_w = p_a;
	p_a = p_b;
	p_b = p_w;


	printf("���s��F*p_a=%d\t*p_b=%d\n", *p_a, *p_b);
	printf("p_a=%d\tp_b=%d\n", p_a, p_b);
}