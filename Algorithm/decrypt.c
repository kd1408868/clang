#include<stdio.h>
main()
{
	int i;
	char s[100];

	printf("暗号化文字列を入力：");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - 1;
	}

	printf("復元文字列は%s\n", &s[0]);
}