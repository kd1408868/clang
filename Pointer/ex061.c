#include<stdio.h>
main()
{
	char data[10] = "Orange";
	char* p_data;
	char* p = "Apple";

	p_data = data;
	printf("data[]=");

	while (*p_data != '\0') 
	{
		putchar(*p_data++);
	}

	printf("\n*p=");

	while (*p!='\0')
	{
		putchar(*p++);
	}
	printf("\n");
}