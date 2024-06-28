//1101005 kadai038.c

#include<stdio.h>
main()
{
	char c;
	printf("ˆê•¶š“ü—ÍF");
	scanf("%c", &c);

	if ('A' <= c && c <= 'z') {
		if ('A' <= c && c <= 'Z') {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", c + 32);
		}
		else {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", c - 32);
		}
	}
	else {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", c);
	}
}