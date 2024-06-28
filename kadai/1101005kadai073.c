//1101005kadai073.c

#include<stdio.h>
main()
{
	int suu;
	char c;
	
	printf("10進数の整数:");
	scanf("%d", &suu);

	printf("アルファベット（o,h,dのどれか):");
	scanf("%*c%c", &c);

	switch (c){
	case'o':printf("8進数:%o\n", suu);
		break;

	case'h':printf("16進数:%x\n", suu);
		break;

	default:printf("10進数:%d\n", suu);
	}
}