#include <stdio.h>

int main(void)
{
int n;
scanf("%d", &n);
while (n > 0) 
    {
    int num = n % 10;
    if (num % 2 != 0)
    {
    printf("NO");
    return 0;  
    }
    n /= 10;
    }
    printf("YES");
    return 0; 
}
