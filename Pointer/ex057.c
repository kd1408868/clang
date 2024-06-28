#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };

	int* p_tbl, i,cnt;
	p_tbl = tbl[0];
	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");
	for (cnt = 3, i = 0; i <  (3 * 3); i++) {
		printf(" %d", *p_tbl++);
		
		cnt--;

		if (cnt == 0) {
			printf("\n");
			cnt = 3;
		}
	}
}