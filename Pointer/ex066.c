#include<stdio.h>
main()
{
	char* p_game[3] = { "wii","ds","playstation4" };
	int i;
	char** p;
	p = p_game;

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", *p++);
	}

	//�ȉ��A�h���X�m�F
	p = p_game;

	printf("\np_game[0]:%d\n", p_game[0]);
	printf("p_game[1]:%d\n", p_game[1]);
	printf("p_game[2]:%d\n", p_game[2]);

	printf("-----------------------\n");

	printf("*p:%d\n", *p);
	printf("*(p+1):%d\n",*(p+1));
	printf("*(p+2):%d\n",*(p+2));

	printf("-----------------------\n");

	printf("*p_game[0]:%c\n", *p_game[0]);
	printf("**p:%c\n", **p);
}