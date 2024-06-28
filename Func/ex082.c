#include<stdio.h>
#include<string.h>
#define DCNT 8
int	sort();

main()
{
	int data[DCNT] = { 6,10,8,2,9,5,1,7 },i;
	char c;

	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í");
	scanf("%s", c);
	data = sort(c,data[]);

	for (i = 0; i < DCNT; i++)
	{
		printf("%d ", data[i]);
	}
}

