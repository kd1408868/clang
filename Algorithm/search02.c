#include<stdio.h>
main()
{
	int  i, s;
	int data[11] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("”‚ð“ü—Í@");
	scanf("%d", &s);

	data[10] = s;
	
	i = 0;

	while (s!=data[i])
	{
		i++;
	}

	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("data[%d]‚Æˆê’v\n", i);
	}
}