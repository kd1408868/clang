#include<stdio.h>
main()
{
	int d1, d2, d3;
	char flg;

	printf("��������́F");
	scanf("%c", &flg);

	printf("��������́F");
	scanf("%d%d%d", &d1, &d2, &d3);

	switch (flg) {
	case'd':
	case'D':

			if (d1 > d2) {

				if (d1 > d3) {
					printf("�ő�l��%d�ł��B\n", d1);
				}
				else {
					printf("�ő�l��%d�ł��B\n", d3);
				}
			}

			else {
			
				if (d2 > d3) {
					printf("�ő�l��%d�ł��B\n", d2);
				}

				else {
					printf("�ő�l��%d�ł�.\n", d3);
				}
			}
		break;
	
	case's':
	case'S':

			if (d1 < d2) {

				if (d1 < d3) {
					printf("�ŏ��l��%d�ł��B\n", d1);
				}
				else {
					printf("�ŏ��l��%d�ł��B\n", d3);
				}
			}

			else {

				if (d2 < d3) {
					printf("�ŏ��l��%d�ł��B\n", d2);
				}

				else {
					printf("�ŏ��l��%d�ł��B\n", d3);
				}
			}
			break;

	case'g':
	case'G':printf("���v��%d�ł��B\n", d1 + d2 + d3);
			break;

	case'h':
	case'H':printf("���ς�%.2f�ł��B\n", (float)(d1 + d2 + d3) / 3);
			break;
	}
}