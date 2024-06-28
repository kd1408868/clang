//1101005kadai043.c

#include<stdio.h>
main()
{
	int  suu=0;
	char c;

	
	while (suu!= -1) {
		
		printf("文字コード(-1で終了):");
		scanf("%d", &suu);

		if(suu != -1) {
			c = suu;
			printf("%c\n", c);

		}

	}
	printf("\n");
}