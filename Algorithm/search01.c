#include<stdio.h>

main()
{
	int  i, s;
	int data[10] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("数を入力　");
	scanf("%d", &s);
	i = 0;

	do{
		i++;
		if (data[i] == s) break;
	} while (i < 10);

	if (i == 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("data[%d]と一致\n", i);
	}

}