#include<stdio.h>
main()
{
	int a[6] = { 11,22,33,44,55,66 };
	int* p_a;

	float b[4] = { 11.1,22.2,33.3,44.4 };
	float* p_b;

	int i, cnt;
	float sum;
	
	sum = 0, i = 0, cnt = 6;
	p_a = a;

	while (cnt!=0)
	{
		sum += *p_a;
		p_a++;
		i++;
		cnt--;
	}
	printf("zña\tv%.0f\t½Ï%.3f\n", sum,sum/ i);

	sum = 0, i = 0, cnt = 4;
	p_b = b;

	while (cnt != 0)
	{
		sum += *p_b;
		p_b++;
		i++;
		cnt--;
	}
	printf("zñb\tv%.3f\t½Ï%.3f\n", sum, sum / i);

}