#include<stdio.h>
main(int argc, char* argv[])
{
	int sum;
	sum = 0;
	if (argc >= 3) {
		for (int i = 1; i < argc; i++) {
			sum += atoi(argv[i]);
		}
		printf("‡Œv%d\n", sum);
		/*printf("%d + %d	= %d\n",
			atoi(argv[1]), atoi(argv[2]), atoi(argv[1]) + atoi(argv[2]));*/
	}
	else {
		printf("ERROR\n");
	}
}