#include <stdio.h>

int main(void)
{
int a;
scanf ("%d", &a);
if(a<=1)
{
    return 0;
    }
if (a % a==0 && a % 1 ==0)
    printf("YES\n");
else
    printf("NO\n");
return 0;
}
