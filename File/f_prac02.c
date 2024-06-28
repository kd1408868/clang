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
		printf("ファイルの読み込みエラー\n");
	}

	printf("最高得点　名前：%s  スコア：%d\n\n",max_name,max_score);

	printf("プレイヤー名を入力：");
	scanf("%s", name);

	while (1) {
		printf("現在のスコア：%d('e'で終了)\n",score);
		ch = getch();
		if (ch == 'e') 
		{
			break;
		}
		score++;
	}

	if (score > max_score)
	{
		printf("最高得点更新!!\n");

		if (fp = fopen("score.txt", "w"))
		{
			fprintf(fp, "プレイヤー名：%s\nスコア：%d\n", name, score);

			fclose(fp);
		}
	}
	else {
		printf("ファイルの読み込みエラー\n");
	}
}