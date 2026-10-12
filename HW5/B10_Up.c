#include <stdio.h>

int main(void) 
{
    int a, b, x = 0;

    if (scanf("%d", &a) != 1) 
    {
        printf("Error input\n");
        return 1;
    }
    b = a % 10;
    a /= 10;
    while (a != 0) 
    {
        int num = a % 10;
        if (num >= b) 
        { 
            x = 1;
            break;
        }
        b = num;
        a /= 10;
    }
    if (x) 
    {
        printf("NO\n");
    }  
    else {
        printf("YES\n");
    }
    //printf("%s\n", x ? "NO" : "YES");
    return 0;
}
