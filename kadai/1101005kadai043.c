//1101005kadai043.c

#include<stdio.h>
main()
{
	int  suu=0;
	char c;

	
	while (suu!= -1) {
		
		printf("�����R�[�h(-1�ŏI��):");
		scanf("%d", &suu);

		if(suu != -1) {
			c = suu;
			printf("%c\n", c);

		}

	}
	printf("\n");
}