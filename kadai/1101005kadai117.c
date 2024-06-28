//1101005kadai117.c

#include<stdio.h>
main()
{
	char day[7][10] =
	{ "sunday","monday",
	"tuesday","wednesday",
	"thursday" ,"friday","saturday" };
	int i1,i2;

	for (i1 = 0; i1 < 7; i1++)
	{
		i2 = 0;

		puts(&day[i1][i2]);
		
	}
}