//1101005kadai127.c

#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p=data;
	
	double sum = 0, ave = 0;
	int cnt=0;

	printf("�z��@data[]=");
	for (cnt = 0; cnt < 5; cnt++) {
		printf("%f ", *(p + cnt));
		sum += *(p + cnt);
	}

	ave = sum / cnt;
	printf("\n���v��%.3f\n���ρ�%.3f\n", sum, ave);
}