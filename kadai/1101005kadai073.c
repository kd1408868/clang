//1101005kadai073.c

#include<stdio.h>
main()
{
	int suu;
	char c;
	
	printf("10�i���̐���:");
	scanf("%d", &suu);

	printf("�A���t�@�x�b�g�io,h,d�̂ǂꂩ):");
	scanf("%*c%c", &c);

	switch (c){
	case'o':printf("8�i��:%o\n", suu);
		break;

	case'h':printf("16�i��:%x\n", suu);
		break;

	default:printf("10�i��:%d\n", suu);
	}
}