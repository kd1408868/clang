#include<stdio.h>
void shisoku(int, int, int*, int*, int*, int*);

main() {
	int a, b, c, d, e, f;
	printf("���l�F");
	scanf("%d", &a);
	printf("���l�F");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);

	puts("���l�Ɛ��l�̎l�����Z");
	printf("wa=%d sa=%d sk=%d sho=%d\n", c, d, e, f);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* sho)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*sho = x / y;
	return;
}