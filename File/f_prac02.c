#include<stdio.h>
main()
{
	int max_score;
	char max_name[20];

	int score = 0;
	char ch;
	char name[20];
	FILE* fp;

	if (fp = fopen("score.txt", "r"))
	{
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
	}
	else {
		printf("�t�@�C���̓ǂݍ��݃G���[\n");
	}

	printf("�ō����_�@���O�F%s  �X�R�A�F%d\n\n",max_name,max_score);

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

	if (score > max_score)
	{
		printf("�ō����_�X�V!!\n");

		if (fp = fopen("score.txt", "w"))
		{
			fprintf(fp, "�v���C���[���F%s\n�X�R�A�F%d\n", name, score);

			fclose(fp);
		}
	}
	else {
		printf("�t�@�C���̓ǂݍ��݃G���[\n");
	}
}