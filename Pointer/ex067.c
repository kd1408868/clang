#include<stdio.h>
#include<string.h>

main()
{
	char* p_tbl[4] = { "Programming2","Algorithm","Programming1","C" };
	char** p;
	char* w;	//��Ŏg��


	int i, j;	//��r�̎��Ɏg��


	p = p_tbl;


	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (strcmp(*(p + i), *(p + j)) < 0)
			{
				w = *(p+ i);	// *(p+ i)��p_tbl[i]�Ɠ���
				*(p + i) = *(p + j);
				*(p + j) = w;
			}
		}
	}

	p = p_tbl;
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", *(p + i));
	}
}