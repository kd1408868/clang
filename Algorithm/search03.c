#include<stdio.h>
main()
{
	int mid,low,high,s;
	int data[11] = { 10,15,18,23,28,35,47,55,68,78,96 };

	printf("数を入力　");
	scanf("%d", &s);

	low = 0;
	high = 10;

	while(low <= high) {

		mid = (low + high) / 2;

		if(s == data[mid]) {
			break;
		}

		if (s > data[mid]){
			low = mid + 1;
			
		}

		if (s < data[mid]) {
			high = mid - 1;
		}


	}

	if(s != data[mid]) {
		printf("見つからなかった。\n");
	}
	else {
		printf("data[%d]と一致\n", mid);
	}

}