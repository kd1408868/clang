#include<stdio.h>
main()
{
	float a, b, c;
	printf("1‚Â–Ú‚ÌÀ”:");
	scanf(" %f", &a);
	printf("‚Q‚Â–Ú‚ÌÀ”:");
	scanf(" %f", &b);
	printf("‚R‚Â–Ú‚ÌÀ”:");
	scanf("%f", &c);
	printf("‡Œv%.2f\n•½‹Ï%.2f\n", a + b + c, (a + b + c) / 3);
}