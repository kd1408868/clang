//1101005kadai084.c


#include<stdio.h>
main()
{
	int i1, i2;

	while (1) {
		printf("����1(-999�ŏI��)�F");
		scanf("%d", &i1);

		if (i1 == -999) {
			break;
		}

		if (i1 == 0) {
			continue;
		}

		printf("����2(-999�ŏI��)�F");
		scanf("%d", &i2);

		if (i2 == -999) {
			break;
		}

		if (i2 == 0) {
			continue;
		}

		printf("%d/%d=%d���܂�%d\n", i1, i2, i1 / i2, i1 % i2);

	}
}