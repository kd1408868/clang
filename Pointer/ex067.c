#include<stdio.h>
#include<string.h>

main()
{
	char* p_tbl[4] = { "Programming2","Algorithm","Programming1","C" };
	char** p;
	char* w;	//後で使う


	int i, j;	//比較の時に使う


	p = p_tbl;


	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (strcmp(*(p + i), *(p + j)) < 0)
			{
				w = *(p+ i);	// *(p+ i)はp_tbl[i]と同じ
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