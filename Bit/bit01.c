#include<stdio.h>
enum BitState
{
	Base = 0,			//0000 0000 通常状態
	Poison = 1 << 0,	//0000 0001 どく状態
	Sleep=1<<1,			//0000 0010 ねむり状態
	Paralysis=1<<2,		//0000 0100 まひ状態
	Burn=1<<3,			//0000 1000 やけど状態
	AtkUp=1<<4,			//0001 0000 攻撃力アップ
	AtkDown=1<<5		//0010 0000 攻撃力ダウン
};


typedef unsigned int UINT;

//
void DisplayStatus(UINT s);

//
void ChangeFlg(UINT* s);

//
void ClearFlg(UINT* s);

main()
{
	UINT MyState = Base;
	ChangeFlg(&MyState);
	DisplayStatus(MyState);
	ClearFlg(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");
	if (s & Poison)
	{
		printf("どく\n");
	}

	if (s & Sleep)
	{
		printf("ねむり\n");
	}
	
	if (s & Paralysis)
	{
		printf("まひ\n");
	}

	if (s & Burn)
	{
		printf("やけど\n");
	}

	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}

	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	
	if (s == Base)
	{
		printf("初期状態\n");
	}

	printf("******************\n");
}


void ChangeFlg(UINT* s)
{
	int i;
	while (1)
	{
		printf("\nどの状態にしますか？\n");
		printf("(1,毒  2,眠り  3,まひ  4,やけど  5,攻撃↑  6,攻撃↓  0,入力終了> )\n");
		scanf("%d", &i);
		if (i == 0) {
			break;
		}
		switch (i)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}

	}
	
}


void ClearFlg(UINT* s)
{
	int i;
	while (1)
	{
		printf("\nどの状態を回復しますか？\n");
		printf("(1,毒  2,眠り  3,まひ  4,やけど  5,攻撃↑  6,攻撃↓  7,全解除  0,入力終了> )\n");
		scanf("%d", &i);
		if (i == 0) {
			break;
		}
		switch (i)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s &= Base;
			break;
		default:
			break;
		}

	}

}
