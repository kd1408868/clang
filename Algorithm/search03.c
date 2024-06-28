#include<stdio.h>
main()
{
	int mid,low,high,s;
	int data[11] = { 10,15,18,23,28,35,47,55,68,78,96 };

	printf("”‚ğ“ü—Í@");
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
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½B\n");
	}
	else {
		printf("data[%d]‚Æˆê’v\n", mid);
	}

}