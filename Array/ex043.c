#include<stdio.h>
main()
{
	int i;
	char data[] = "orange";

	i = 0;
	while (data[i] != '\0') {
		i++;
	}

	printf("•¶š—ñF%s\n", &data[0]);
	printf("•¶š”‚Í%d•¶š\n", i);

}