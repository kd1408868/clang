#include<stdio.h>
main()
{
	char c;
	printf("���Z�q����́F");
	scanf("%c", &c);

	switch (c) {
	case  '+':printf("���Z�ł�\n");
		break;

	case '-':printf("���Z�ł�\n");
		break;

	case '*':printf("��Z�ł�\n");
		break;

	case '/':printf("���Z�ł�\n");
		break;

	case '%':printf("���܂�ł�\n");
		break;

	default:printf("���̑��ł�\n");
	}
}