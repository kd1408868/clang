#include<stdio.h>
#include<stdlib.h>	//�����g�p���K�v
#include<time.h>	//�����g�p���K�v

main()
{
	int suu;

	srand(time(0));	//�������������i�V���b�t���j����
	suu = rand();	//0~32767�͈̔͂ŗ��������߂�
	suu = rand();
	printf("��������������%d�ł��B\n", suu);
}