#include<stdio.h>
main()
{
	char c;
	printf("演算子を入力：");
	scanf("%c", &c);

	switch (c) {
	case  '+':printf("加算です\n");
		break;

	case '-':printf("減算です\n");
		break;

	case '*':printf("乗算です\n");
		break;

	case '/':printf("除算です\n");
		break;

	case '%':printf("あまりです\n");
		break;

	default:printf("その他です\n");
	}
}