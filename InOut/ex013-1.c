#include<stdio.h>
main()
{
	char go, ro;
	go = '5', ro = '6';
	//5*6の結果をgoとroの演算を使って%dで表示
	printf("5*6=%d\n", (go - 48) * (ro - 48));
}