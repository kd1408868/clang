#include<stdio.h>

main()
{
	int i, k;
	char s[21];

	printf("���������́F");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕����L�[����́F", i);
		scanf("%d", &k);
		s[i] = s[i] - k;
	}

	printf("�������������%s\n", &s[0]);

}