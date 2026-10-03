#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, max1, max2, max3;
    scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max1= a>b ? a : b;
    max2= c>d ? c : d;
    max3= max1>max2 ? max1 : max2;
    printf ("%d\n", max3>e ? max3 : e);
    return 0;
}
