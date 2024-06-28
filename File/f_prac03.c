#include<stdio.h>
typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct {
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;

void Setinfo(Soldier* s, char* filename);

void Display(Soldier s);

main() 
{
	Soldier sol;
	Setinfo(&sol, "file03.txt");
	Display(sol);	//�G���[�Ŏ��s���Ȃ��悤��
}

void Setinfo(Soldier* s, char* filename)
{
	FILE* fp;
	if (fp = fopen(filename, "r"))
	{
		fscanf(fp, "%s%d%s%d%f", s->name,&s->hp,s->wpn.Wname,&s->wpn.bullet,&s->wpn.atk);
		fclose(fp);
	}
	else
	{
		printf("�ǂݍ��݃G���[\n");
		return;
	}
}

void Display(Soldier s)
{
	printf("%s �̗́F%d\n",s.name,s.hp );
	printf("����F%s �e���F%d �U���́F%.2f\n",s.wpn.Wname,s.wpn.bullet,s.wpn.atk );
}