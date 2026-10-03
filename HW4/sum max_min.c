#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, max, max1, max2, max3, min, min1, min2, min3, sum;
    scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max1= a>b ? a : b;
    max2= c>d ? c : d;
    max3= max1>max2 ? max1 : max2;
    max= max3>e ? max3 : e;
    min1= a<b ? a : b;
    min2= c<d ? c : d;
    min3= min1<min2 ? min1 : min2;
    min= min3<e ? min3 : e;
    sum = max+min;
    printf("%d\n", sum);
    return 0;
}
