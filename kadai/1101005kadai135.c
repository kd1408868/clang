//1101005kaadai134.c

#include<stdio.h>
main()
{
	char c[256];
	int i,j;

	printf("•¶š—ñ“ü—ÍF");

	while (scanf("%s", &c[0]) != EOF)
	{
		for (i = 0; c[i] != '\0'; i++);
		i--;

		for (; i >= 0; i--)
		{
			printf("%c",c[i]);
		}
		printf("\n•¶š—ñ“ü—ÍF");
	}


}