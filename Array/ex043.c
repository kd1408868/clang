#include<stdio.h>
main()
{
	int i;
	char data[] = "orange";

	i = 0;
	while (data[i] != '\0') {
		i++;
	}

	printf("文字列：%s\n", &data[0]);
	printf("文字数は%d文字\n", i);

}