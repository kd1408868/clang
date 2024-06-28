//1101005kadai125.c

#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p = &data[0];

	printf("配列　data[]=%d",*p);


	printf("配列　data[]=");
	for (;*p!=-999;p++) {
		printf("%d ", *p);
	}

}