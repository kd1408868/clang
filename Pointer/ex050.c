#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a;	//�|�C���^�ϐ�

	p_a = &a;	//a�̃A�h���X��p_a�ɓ����
	b = *p_a;	//p_a�̃A�h���X�̒��g��b�ɓ����

	printf("a=%d\t&a=%d\n", a, &a);
	printf("p_a=%d *p_a=%d &p_a=%d\n", p_a, *p_a, &p_a);

}