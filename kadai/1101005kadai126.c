//1101005kadai126.c

#include<stdio.h>
main()
{
	int i, max, min;
	int data[] = { 10,9,1,20,45,21,38,45,88 };
	int* p=data;
	
	printf("data[]=");
	for (i = 0; i < 9; i++) {
		printf(" %d", *(p+i));
	}
	printf("\n");

	max = *p, min = *p;
	for (i = 1; i < 9; i++) {
		if (*(p + i) > max) {
			max = *(p + i);
		}
		if (*(p + i) < min) {
			min = *(p + i);
		}
	}
	printf("Å‘å’l%d Å¬’l%d\n", max, min);
}