//1101005 kadai02a.c

#include<stdio.h>
main()
{
	double d1, d2;

	printf("2�̎����l�F");
	scanf("%lf %lf", &d1, &d2);

	printf("****%f��%f�̎l�����Z****\n", d1, d2);
	printf("�a��%f ����%f �ρ�%f ����%f\n", d1 + d2, d1 - d2, d1 * d2, d1 / d2);
}