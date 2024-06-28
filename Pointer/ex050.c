#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a;	//ポインタ変数

	p_a = &a;	//aのアドレスをp_aに入れる
	b = *p_a;	//p_aのアドレスの中身をbに入れる

	printf("a=%d\t&a=%d\n", a, &a);
	printf("p_a=%d *p_a=%d &p_a=%d\n", p_a, *p_a, &p_a);

}