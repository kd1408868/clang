#include<stdio.h>
main()
{
	char m;
	printf("•¶š‚ğ“ü—ÍF");
	scanf("%c", &m);

	if ('A' <= m && m <= 'z') {
		if ('A' <= m && m <= 'Z') {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", m + 32);
		}
		else {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", m - 32);
		}
	}
	else {
		printf("ERROR\n");
	}
}