//1101005 kadai037.c

#include<stdio.h>
main()
{
	int i;
	printf("1~100�܂ł̐����F");
	scanf("%d", &i);

	if (i >= 30) {

		if (i >= 50) {

			if (i >= 80) {

				if (i >= 90) {
					printf("���̐��l�̔��茋�ʂ́u5�v�ł��B\n");
				}
				else {
					printf("���̐��l�̔��茋�ʂ́u4�v�ł��B\n");
				}
			}
			else {

				printf("���̐��l�̔��茋�ʂ́u3�v�ł��B\n");
			}
		}
		else {
			printf("���̐��l�̔��茋�ʂ́u2�v�ł��B\n");
		}
	}
	else {
		printf("���̐��l�̔��茋�ʂ́u1�v�ł��B\n");
	}
}