#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i,gacha;

	srand(time(0));

	

	for (i = 0; i < 10; i++) {
		gacha = rand();
		gacha = rand() % 100 + 1;
		if (gacha >= 50) {
			printf("☆　ノーマル\n");
		}
		if (20 <= gacha && gacha <= 49) {
			printf("☆ ☆　レア\n");
		}
		if (6 <= gacha && gacha <= 19) {
			printf("☆ ☆ ☆　SR\n");
		}
		if (2 <= gacha && gacha <= 5) {
			printf("☆ ☆ ☆ ☆　SSR\n");
		}
		if (gacha == 1) {
			printf("☆ ☆ ☆ ☆ ☆　LR\n");
		}
	}

}
