//1101005kadai12p.c

#include<stdio.h>
main()
{
	char* day[7] =
	{
		"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
	};

	char** p;
	int i;
	p = day;

	//１　day[i]の形式で

	for (i = 0; i < 7; i++)
	{
		printf("%s\n", day[i]);
	}


	printf("--------------------\n");
	//２　*pを用いて
	for (i = 0; i < 7; i++)
	{
		printf("%s\n",*(p+i));
	}



}