#include<stdio.h>
main()
{
	int i;
	float box[3], sum;

	for (sum = 0,i = 0; i <= 2; i++) {
		printf("��������́F");
		scanf("%f", &box[i]);

		sum += box[i];
	}
	printf("���v��%.2f�@���ρ�%.2f\n",sum,sum/i);

}