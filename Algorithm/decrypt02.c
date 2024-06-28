#include<stdio.h>

main()
{
	int i, k;
	char s[21];

	printf("文字列を入力：");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]の複合キーを入力：", i);
		scanf("%d", &k);
		s[i] = s[i] - k;
	}

	printf("復号化文字列は%s\n", &s[0]);

}