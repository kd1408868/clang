#include<stdio.h>
main()
{
	int i;
	char s[100];

	printf("���������́F");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] + 1;
	}

	printf("�Í����������%s\n", &s[0]);
}