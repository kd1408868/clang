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
		printf("%d�l��\n���O����́F", i + 1);
		scanf("%s", p->name);

		printf("���N�������󔒂ŋ�؂��ē��́F");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);


		printf("���t�^����́F");
		scanf("%s", p->blood);
		printf("\n");
	}

	p = data;
	for (i = 0; i < DCNT; i++, p++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s�[�[%d�N%d��%d�����[�[���t�^%s�^\n",
				p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}

	}

}