//1101005kadai041.c

#include<stdio.h>
main()
{
	int i,sum,suu;
	i = 0;
	suu = 0;
	sum = 0;

	while (i != -999) {

		sum += i;
		printf("�����F�i-999�ŏI���j");
		scanf("%d", &i);

		suu+=1;
	}

	printf("���v��%d\n���ρ�%d\n", sum, sum / suu);

}