#include<stdio.h>
void calculate(int, int, int*, float*);

main() {
	int a, b, c;
	float d;
	printf("数値：");
	scanf("%d", &a);
	printf("数値：");
	scanf("%d", &b);
	calculate(a, b, &c, &d);

	printf("合計=%d 平均=%.2f\n", c, d);
}

void calculate(int x, int y, int* gokei, float* heikin)
{
	*gokei = x + y;
	*heikin =(x+y)/2.0;
	
	return;
}