#include<stdio.h>
main()
{
	int i;
	char data[]="Apple";
	
	printf("�P�������\��\n");

	i = 0;
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i++;
	}

	printf("\n������ŕ\��\n%s\n", &data[0]);

}