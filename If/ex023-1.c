#include<stdio.h>
main()
{
	int a;
	printf("秒数を入力：");
	scanf("%d", &a);
	if(0<=a){
		if (a<=5000) {
			int h, n, s;
			h = a / 3600, n = a % 3600 / 60, s = a % 3600 % 60;
			printf("%d時間%d分%d秒です。\n", h, n, s);
		}
		else {
			printf("ERROR\n");
		}
	}
	else {
		printf("マイナスはエラーです。\n");
	}
}