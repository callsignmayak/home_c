#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, min1, min2, min3;
    scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
    min1= a<b ? a : b;
    min2= c<d ? c : d;
    min3= min1<min2 ? min1 : min2;
    printf ("%d\n", min3<e ? min3 : e);
    return 0;
}
