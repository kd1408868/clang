#include<stdio.h>
main()
{
	int i;
	char data[] = "orange";

	i = 0;
	while (data[i] != '\0') {
		i++;
	}

	printf("������F%s\n", &data[0]);
	printf("��������%d����\n", i);

}