#include<stdio.h>
char renketu();

main()
{
	char a[256], b[256];

	printf("�z��a:");
	scanf("%s", a);
	printf("�z��b:");
	scanf("%s", b);

	a[0] = renketu(a, b);

	printf("�z��a�F%s\n",a);
}

char renketu(char a[], char b[])
{
	int i, j;
	for (i = 0; a[i] != '\0'; i++);
	for(j = 0; b[j]!= '\0';i++, j++)
	{
		a[i] = b[j];
	}
	a[i] = '\0';
	return(a[0]);
}