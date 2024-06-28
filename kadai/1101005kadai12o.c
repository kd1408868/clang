//1101005kadai12o.c

#include<stdio.h>
main()
{
	char* p = "pointer¢test¢program";
	char save[256];

	p = &save[0];
	int i;

	for (i = 0; save[i] != '\0';*p++, i++) {
			*p = save[i];
	}
	printf("”z—ñ save=");
	for (int i = 0; save[i] != '\0'; i++)
	{
		printf("%c", save[i]);
	}
	printf("\n");
}