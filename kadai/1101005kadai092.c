//1101005 kadai092.c

#include<stdio.h>
main()
{
	int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int i,c[10];

	printf("�z��a����c�ɃR�s�[\n�z�� a = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n�z�� c = ");

	for (i = 0; c[i] = a[i]; i++);
	
	for (i = 0; i<10; i++) {
		printf("%d ", c[i]);
	}
	printf("\n");

}