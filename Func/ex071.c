#include<stdio.h>
int gokei(int a,int b,int c);
float heikin(int sum);


main()
{
	int a, b, c, sum;
	float avg;
	printf("®”‚ğ3‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b,&c);
	sum = gokei(a, b, c);
	avg = heikin(sum);
	printf("‡Œv%d\n•½‹Ï%.2f\n",sum,avg);
}

int gokei(int a, int b, int c)
{
	int ans1;
	ans1 = a + b + c;
	return(ans1);
}

float heikin(int sum)
{
	float ans2;
	ans2 = (float)sum / 3.0;
	return(ans2);
}