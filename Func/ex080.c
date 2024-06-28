#include<stdio.h>
#define TBL_END 5
int tbl_gokei4(int*p);

int main(void)
{
	int a[] = { 10,20,30,40,50 };
	int gokei;

	gokei = tbl_gokei4(a);
	printf("gokei=%d\n", gokei);

	return 0;
}

int tbl_gokei4(int* p) {
	int gokei = 0;

	for (int i = 0; i < TBL_END; p++,i++)
	{
		gokei += *p;
		
	}

	return(gokei);
}