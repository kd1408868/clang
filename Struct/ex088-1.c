#include<stdio.h>
#include<string.h>
struct syohin_data 
{
	char name[20];
	int tanka;
}syohin1,syohin2;
//	↑　構造体の宣言ト同時に構造体変数を宣言

main()
{
	/*struct syohin_data syohin1, syohin2;*/
	strcpy(syohin1.name, "エンピツ");

	syohin1.tanka = 30;
	syohin2 = syohin1;
	
	printf("syohin1.name=%s\n", syohin1.name);
	printf("syohin1.tanka1=%d\n", syohin1.tanka);
	printf("syohin2.name=%s\n", syohin2.name);
	printf("syohin2.tanka1=%d\n", syohin2.tanka);

}