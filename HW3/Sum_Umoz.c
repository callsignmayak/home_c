#include <stdio.h>

int main(void)
{
	int a, b, c, x, x1;
	scanf ("%d%d%d", &a, &b, &c);
	x=a+b+c;
	x1=a*b*c;
	printf ("%d+%d+%d=%d\n", a, b, c, x);
	printf ("%d*%d*%d=%d\n", a, b, c, x1);
	return 0;
}
