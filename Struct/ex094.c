#include<stdio.h>
#include<string.h>
#define DCNT 5

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data[DCNT];
	struct profile* p=data;


	int i;
	for (i = 0; i < DCNT; i++, p++)
	{
		printf("%d人目\n名前を入力：", i + 1);
		scanf("%s", p->name);

		printf("生年月日を空白で区切って入力：");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);


		printf("血液型を入力：");
		scanf("%s", p->blood);
		printf("\n");
	}

	p = data;
	for (i = 0; i < DCNT; i++, p++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%sーー%d年%d月%d日生ーー血液型%s型\n",
				p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}

	}

}