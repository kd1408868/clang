#include<stdio.h>
main()
{
	int sum, num;
	sum = 0;
	do {
		printf("�������āF");
		scanf("%d", &num);
		if (num == -999)break;
		sum += num;
	} while (1);
	printf("���v��%d\n", sum);
}