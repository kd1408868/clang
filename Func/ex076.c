#include<stdio.h>
void calculate(int, int, int*, float*);

main() {
	int a, b, c;
	float d;
	printf("���l�F");
	scanf("%d", &a);
	printf("���l�F");
	scanf("%d", &b);
	calculate(a, b, &c, &d);

	printf("���v=%d ����=%.2f\n", c, d);
}

void calculate(int x, int y, int* gokei, float* heikin)
{
	*gokei = x + y;
	*heikin =(x+y)/2.0;
	
	return;
}