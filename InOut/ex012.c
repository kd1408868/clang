#include<stdio.h>
main()
{
	//文字型変数　mojiの宣言
	char moji;
	//変数　mojiにAを代入
	moji = 'a';
	//変数 mojiに+32してaを出す
	printf("moji：%c\n小文字に変換:%c\n", moji, moji -32);
}
