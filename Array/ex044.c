#include<stdio.h>
main()
{
	char moji1[100], moji2[100],data[100];
	int i;

	printf("������P����́F");
	scanf("%s", &moji1[0]);
	printf("������Q����́F");
	scanf("%s", &moji2[0]);

	printf("moji1=%s\tmoji2=%s\n", moji1, moji2);

	for (i = 0; data[i]=moji1[i]; i++);
	for (i = 0; moji1[i]=moji2[i]; i++);
	for (i = 0; moji2[i]=data[i]; i++);
	
	printf("����ւ����\nmoji1=%s\tmoji2=%s\n", moji1, moji2);


}