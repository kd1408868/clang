#include<stdio.h>
main()
{
	int i,num,sum;

	printf("��������:");
	scanf("%d", &num);

	for (sum = 0, i = 0; num != -999; i++) {
		sum += num;
		printf("�������āF");
		scanf("%d", &num);
	}
	printf("���v��%d ���ρ�%.2f\n", sum, (float)sum / i);
}