#include<stdio.h>
main()
{
	int i, d, sum, cnt;

	printf("�����F");
	d = scanf("%d", &i);

	sum = 0, cnt = 0;

	while (d != EOF)
	{
		sum += i;
		cnt++;
		printf("�����F");
		d = scanf("%d", &i);

	}
	printf("���v��%d\t���ρ�%.2f\n", sum, (float)sum / cnt);

	/*�ȉ��ʉ�
	
	
		int i,d, sum, cnt;

		printf("�����F");

		while(scanf("%d", &i)!=EOF)
		{
			sum+=i;
			cnt++;
			printf("�����F");
		}
		printf("���v��%d\t���ρ�%.2f\n", sum, (float)sum / cnt);


	*/





}