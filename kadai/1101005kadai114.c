//1101005kadai114.c

#include<stdio.h>
main()
{
	char moji[256];
	int i=0;
	printf("������́H");
	scanf("%s", &moji[0]);

	printf("\n���͂����������");
	while (moji[i] != '\0')
	{
		printf("%c", moji[i]);
		i++;
	}
	printf("\n��������%d\n", i);

}