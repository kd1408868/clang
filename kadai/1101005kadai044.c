//1101005kadai044.c

#include<stdio.h>
main()
{
	int i;
	i = 0;

	while (i != -999) {

		printf("�����i�|�X�X�X�ŏI���j�F");
		scanf("%d", &i);

		if (i != -999) {
			printf("8�i����%o\t16�i����%X\n",i,i);
		}

	}
	printf("\n");
}