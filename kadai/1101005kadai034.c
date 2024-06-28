//1101005 kadai034.c

#include<stdio.h>
main()
{
	char c;
	printf("ˆê•¶š“ü—ÍF");
	scanf("%c", &c);

	if ('A' <= c && c <= 'z') {
		if ('A' <= c && c <= 'Z') {
			printf("‚»‚Ì•¶š‚Íh‘å•¶šh‚Å‚·B\n");
		}
		else {
			printf("‚»‚Ì•¶š‚Íh¬•¶šh‚Å‚·B\n");
		}
	}
	else {
		printf("ERROR\n");
	}
}