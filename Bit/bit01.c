#include<stdio.h>
enum BitState
{
	Base = 0,			//0000 0000 �ʏ���
	Poison = 1 << 0,	//0000 0001 �ǂ����
	Sleep=1<<1,			//0000 0010 �˂ނ���
	Paralysis=1<<2,		//0000 0100 �܂Џ��
	Burn=1<<3,			//0000 1000 �₯�Ǐ��
	AtkUp=1<<4,			//0001 0000 �U���̓A�b�v
	AtkDown=1<<5		//0010 0000 �U���̓_�E��
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
	printf("****���݂̏��****\n");
	if (s & Poison)
	{
		printf("�ǂ�\n");
	}

	if (s & Sleep)
	{
		printf("�˂ނ�\n");
	}
	
	if (s & Paralysis)
	{
		printf("�܂�\n");
	}

	if (s & Burn)
	{
		printf("�₯��\n");
	}

	if (s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}

	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	
	if (s == Base)
	{
		printf("�������\n");
	}

	printf("******************\n");
}


void ChangeFlg(UINT* s)
{
	int i;
	while (1)
	{
		printf("\n�ǂ̏�Ԃɂ��܂����H\n");
		printf("(1,��  2,����  3,�܂�  4,�₯��  5,�U����  6,�U����  0,���͏I��> )\n");
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
		printf("\n�ǂ̏�Ԃ��񕜂��܂����H\n");
		printf("(1,��  2,����  3,�܂�  4,�₯��  5,�U����  6,�U����  7,�S����  0,���͏I��> )\n");
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
