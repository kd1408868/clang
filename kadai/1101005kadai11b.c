//1101005kadai11b.c

#include<stdio.h>
main()
{
	char day[7][10] =
	{ "sunday","monday",
	"tuesday","wednesday",
	"thursday" ,"friday","saturday" };
	int i1;

	printf("数値は？（0～6）");
	scanf("%d", &i1);
	if(i1 == 0) {
		printf("%s\n", &day[i1][0]);
	}
	if (i1 == 1) {
		printf("%s\n", &day[i1][0]);
	}
	if (i1 == 2) {
		printf("%s\n", &day[i1][0]);
	}
	if (i1 == 3) {
		printf("%s\n", &day[i1][0]);
	}
	if (i1 == 4) {
		printf("%s\n", &day[i1][0]);
	}
	if (i1 == 5) {
		printf("%s\n", &day[i1][0]);
	}
	if (i1 == 6) {
		printf("%s\n", &day[i1][0]);
	}
	
}