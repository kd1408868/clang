//1101005kadai081.c

#include<stdio.h>
main()
{
	int suu, sum,i;

	suu = 0;
	sum = 0;
	i = 0;

	while (1) {
		sum = sum + suu;
		printf("�����i-999�ŏI���j�F");
		scanf("%d", &suu);

		if (suu == -999) {
			break;
		}
		i++;
	}

	printf("���v��%d\t���ρ�%.3f\n", sum, (float)sum / i);
}