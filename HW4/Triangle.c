#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a+b<=c || a+c<=b || b+c<=a)
    printf("NO\n");
    else 
    printf("YES\n");
    return 0;
}

