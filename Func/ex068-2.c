#include<stdio.h>
main()
{
	
	char dummy[256];
	char* cp;

	printf("���������́F");
	cp= gets(dummy);

	while (cp != NULL)
	{
		printf("���͂��ꂽ�̂�%s\n", cp);
		printf("���������́F");
		cp = gets(dummy);
	}
}