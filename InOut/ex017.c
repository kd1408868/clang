#include<stdio.h>
main()
{
	float a, b, c;
	printf("1つ目の実数:");
	scanf(" %f", &a);
	printf("２つ目の実数:");
	scanf(" %f", &b);
	printf("３つ目の実数:");
	scanf("%f", &c);
	printf("合計＝%.2f\n平均＝%.2f\n", a + b + c, (a + b + c) / 3);
}