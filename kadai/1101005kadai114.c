//1101005kadai114.c

#include<stdio.h>
main()
{
	char moji[256];
	int i=0;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &moji[0]);

	printf("\n“ü—Í‚µ‚½•¶š—ñ‚Í");
	while (moji[i] != '\0')
	{
		printf("%c", moji[i]);
		i++;
	}
	printf("\n•¶š”‚Í%d\n", i);

}