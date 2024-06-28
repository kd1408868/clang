#include<stdio.h>
main()
{
	char c,data[15] = "Language";
	char* p_data;
	int i;
	i = 0;
	p_data = data;

	printf("data[]=%s\n", p_data);

	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &c);

	printf("ŒŸõŒ‹‰Ê‚ÍA");

	while (*(p_data+i) != '\0') {

		if(*(p_data+i) == c) {

			printf("%d ", i + 1);
		}
		i++;
	}

	//	for(p_data=data,i=0;*(p_data+i)!='\0';i++)
	//	{
	//		if(c==*(p_data+i))
	//		{
	//				printf("%d ",i+1);
	//		}
	//	}

	printf("•¶š–Ú‚Å‚·B\n");
}