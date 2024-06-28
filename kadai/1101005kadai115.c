//1101005kadai115.c

#include<stdio.h>
main()
{
	char moji[256];
	int i=0;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &moji[0]);

	printf("\n“ü—Í‚µ‚½•¶š—ñ‚Í\n");
	while (moji[i] != '\0')
	{
		putchar(moji[i]);
		printf("\n");
		i++;
	}

}