#include<stdio.h>
main()
{
	int score = 0;
	char ch;
	char name[20];
	FILE* fp;

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

	if (fp = fopen("score.txt", "w"))
	{
		fprintf(fp, "プレイヤー名：%s\nスコア：%d\n", name, score);

		fclose(fp);
	}
	
}