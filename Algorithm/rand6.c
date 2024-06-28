#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int pre, cpu;
	printf("何を出しますか？\n(1:グー　2：チョキ　3：パー）＞");
	scanf("%d", &pre);

	//プレイヤー
	if (pre != 3) {
		if (pre == 1) {
			printf("プレイヤーはグーです。\n");
		}
		else {
			printf("プレイヤーはチョキです。\n");
		}

	}
	else {
		printf("プレイヤーはパーです。\n");
	}

	srand(time(0));
	cpu = rand() % 3;
	
	//コンピューター
	if (cpu != 2) {
		if (cpu == 0) {
			printf("コンピューターはグーです。\n");
		}
		else {
			printf("コンピューターはチョキです。\n");
		}

	}
	else {
		printf("コンピューターはパーです。\n");
	}

	//勝敗

	//pre グー
	if (pre == 1) {	

		if (cpu != 1) {

			if (cpu == 2) {
				printf("\nコンピューターの勝ちです。\n");
			}
			else {
				printf("\n相子です。\n");
			}

		}
		else {
			printf("\nプレイヤーの勝ちです。\n");
		}

	}

	//pre　チョキ
	if(pre==2) {	

		if (cpu != 2) {

			if (cpu == 0) {
				printf("\nコンピューターの勝ちです。\n");
			}
			else {
				printf("\n相子です。\n");
			}

		}
		else {
			printf("\nプレイヤーの勝ちです。\n");
		}
	}
	
	//pre　パー
	if (pre == 3) {	
		if (cpu != 0) {

			if (cpu == 1) {
				printf("\nコンピューターの勝ちです。\n");
			}
			else {
				printf("\n相子です。\n");
			}

		}
		else {
			printf("\nプレイヤーの勝ちです。\n");
		}

	}


}