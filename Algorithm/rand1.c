#include<stdio.h>
#include<stdlib.h>	//乱数使用時必要
#include<time.h>	//乱数使用時必要

main()
{
	int suu;

	srand(time(0));	//乱数を初期化（シャッフル）する
	suu = rand();	//0~32767の範囲で乱数を求める
	suu = rand();
	printf("発生した乱数は%dです。\n", suu);
}