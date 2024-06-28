#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i,n, k[21];
	char s[21];

	srand(time(0));
	srand(time(0));

	printf("•¶š—ñ‚ğ“ü—ÍF");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		
		k[i] = rand() % 6;	//‚O`‚T‚Ì—”
		s[i] = s[i] + k[i];

	}

	printf("ˆÃ†‰»•¶š—ñ‚Í%s\nˆÃ†‰»ƒL[‚Í", &s[0]);

	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}

	printf("\n");
}