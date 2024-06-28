#include<stdio.h>
main()
{
	char A, B, C, a, b, c, d, e, f, n;
	A = 'A', B = 'B', C = 'C', a = 'a', b = 'b', c = 'c', d = '0', e = '1', f = '2', n = ' ';
	printf("A:%d 0x%x B:%d 0x%x\n",A,A,B,B);
	printf("C:%d 0x%x a:%d 0x%x\n",C,C,a,a);
	printf("b:%d 0x%x c:%d 0x%x\n",b,b,c,c);
	printf("0:%d 0x%x 1:%d 0x%x\n",d,d,e,e);
	printf("2:%d 0x%x  :%d 0x%x\n",f,f,n,n);
}