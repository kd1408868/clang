#include<stdio.h>
main()
{
	float a, b, c;
	printf("1�ڂ̎���:");
	scanf(" %f", &a);
	printf("�Q�ڂ̎���:");
	scanf(" %f", &b);
	printf("�R�ڂ̎���:");
	scanf("%f", &c);
	printf("���v��%.2f\n���ρ�%.2f\n", a + b + c, (a + b + c) / 3);
}