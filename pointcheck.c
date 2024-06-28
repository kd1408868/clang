#include<stdio.h>
main()
{
	char data[] = { "train" };
	char* p_data[] = {"train"};
	char** p;
	p = p_data;

	printf("data[2]=%c\n", data[2]);
	printf("data[2]+1=%c\n", data[2]+1);
	printf("p_data=%s\n", p_data[0]);
	printf("p_data=%s\n", p_data[0]+1);
	printf("*p_data=%s\n", *p_data);
	printf("*p_data+1=%s\n", *p_data+1);
	printf("*p=%s\n", *p);
	printf("**p=%c\n", **p);
	printf("**p+1=%c\n", **p+1);
	printf("*(*p+1)=%c\n", *(*p+1));

}