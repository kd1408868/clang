#include<stdio.h>
main()
{
	int a = 5;
	float b;
	printf("a/2=%d\n",a/2); //整数型同士の割算
	b = a/2;
	printf("a/2=%f\n", b);　//小数点以下を扱う場合
	printf("a/2=%f\n", a / 2.0);
}
