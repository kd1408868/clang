#include<stdio.h>
#include<string.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data;
	struct profile* p;

	p = &data;
	printf("名前を入力：");
	scanf("%s",p->name);

	printf("生年月日を空白で区切って入力：");
	scanf("%d%d%d",&p->birth[0],&p->birth[1],&p->birth[2]);
	

	printf("血液型を入力：");
	scanf("%s", p->blood);

	printf("\n%sーー%d年%d月%d日生ーー血液型%s型\n\n",
		data.name, data.birth[0],data.birth[1],data.birth[2], data.blood);

	printf("ポインタ表示\n%sーー%d年%d月%d日生ーー血液型%s型\n",
		p->name,p->birth[0],p->birth[1],p->birth[2],p->blood);
}