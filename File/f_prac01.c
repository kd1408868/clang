#include<stdio.h>
main()
{
	int score = 0;
	char ch;
	char name[20];
	FILE* fp;

	printf("�v���C���[������́F");
	scanf("%s", name);

	while (1) {
		printf("���݂̃X�R�A�F%d('e'�ŏI��)\n",score);
		ch = getch();
		if (ch == 'e') 
		{
			break;
		}
		score++;
	}

	if (fp = fopen("score.txt", "w"))
	{
		fprintf(fp, "�v���C���[���F%s\n�X�R�A�F%d\n", name, score);

		fclose(fp);
	}
	
}