//1101005kadai11a.c

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
		for (i2 = 0; i2 < 3; i2++)
		{
			putchar(day[i1][i2]);
		}
		putchar('\0');
		printf("\n");
	}
}