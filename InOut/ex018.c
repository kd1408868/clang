#include<stdio.h>
main()
{
	int a, b, c,sum;
	float avg;

	printf("�������R����:");
	scanf("%d%d%d", &a, &b, &c);

	sum = a + b + c;
	avg = (float)sum / 3; //�L���X�g�i�^�ϊ��j
	printf("���v��%d\t ���ρ�%.2f\n", sum, avg);
}