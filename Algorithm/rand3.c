#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k,i;

	srand(time(0));
	for (i = 0; i < 10; i++) {
	k = rand();
	k = rand() % 71 + 1;
		if (k <= 30) {
			printf("��������̂��������I\n");
		}
		else {
			printf("�ʏ�U��\n");
		}
	}
}
