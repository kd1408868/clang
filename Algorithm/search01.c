#include<stdio.h>

main()
{
	int  i, s;
	int data[10] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("������́@");
	scanf("%d", &s);
	i = 0;

	do{
		i++;
		if (data[i] == s) break;
	} while (i < 10);

	if (i == 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("data[%d]�ƈ�v\n", i);
	}

}