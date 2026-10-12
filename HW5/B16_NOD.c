#include <stdio.h>

int main()
{
int a,b,nod;
scanf("%d%d", &a, &b);
    while (b != 0)
    {
    nod = b;
    b = a % b;
    a = nod;
    }
    printf("%d\n", a);
return 0;
}
