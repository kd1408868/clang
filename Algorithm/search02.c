#include<stdio.h>
main()
{
	int  i, s;
	int data[11] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("������́@");
	scanf("%d", &s);

	data[10] = s;
	
	i = 0;

	while (s!=data[i])
	{
		i++;
	}

	if (i >= 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("data[%d]�ƈ�v\n", i);
	}
}