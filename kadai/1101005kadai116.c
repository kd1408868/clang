//1101005kadai114.c

#include<stdio.h>
main()
{
	char moji1[256],moji2[256];
	int i1,i2;
	printf("ï∂éöóÒ1ÇÕÅH");
	scanf("%s", &moji1[0]);

	printf("ï∂éöóÒ2ÇÕÅH");
	scanf("%s", &moji2[0]);
	
	for (i1 = 0; moji1[i1] != '\0'; i1++);

	for (i2 = 0; moji2[i2] != '\0'; i1++, i2++)
	{
		moji1[i1] = moji2[i2];
	}
	moji1[i1] = '\0';

	
	for (i1 = 0; moji1[i1] != '\0'; i1++)
	{
		printf("%c", moji1[i1]);
	}
	printf("\n");

}