//1101005kadai132.c

#include<stdio.h>
main()
{
	int suu,sum, cnt;
	sum = 0;
	cnt = 0;

	printf("������́iEOF�ŏI���j�F");

	while (scanf("%d", &suu) != EOF)
	{
		sum += suu;
		cnt++;

		printf("������́F�iEOF�ŏI���j");
	
	}

	printf("���v��%d\n���ρ�%.1f\n", sum, (float)sum / cnt);
}