#include<stdio.h>
main()
{
	//文字型変数の宣言
	char su;
	//変数に文字として１を代入
	su = '1';
	//変数を%dで表示
	printf("su:%c\n数値に変換:%d\n", su, su-48);
}