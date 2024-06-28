#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };

	int* p_tbl, i, cnt;
	
	
	for (i = 0,p_tbl = tbl[i],cnt = 3; i < (3 * 3); i++) {
		if (3 < i && i < 7) {
			printf(" %d", *p_tbl);

			cnt--;
		}

		if (cnt == 0) {
			printf("\n");
			cnt = 3;
		}
	}
}