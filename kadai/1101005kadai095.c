//1101005kadai095.c

#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i, sum, cnt, avg;

	printf("a=10,20,30,40,50,60,70,80,90,100\n");

	for (sum = 0, cnt = 0, i = 0; i < 10; cnt++, i++) {
		sum += a[i];
	}
	avg = sum / cnt;

	printf("‡Œv %d\t•½‹Ï%d\n", sum, avg);

	printf("b=100,200,300,400,500,600,700,800,900,1000\n");

	for (sum = 0, cnt = 0, i = 0; i < 10; cnt++, i++) {
		
		sum += b[i];
	}
	avg = sum / cnt;

	printf("‡Œv %d\t•½‹Ï%d\n", sum, avg);
}