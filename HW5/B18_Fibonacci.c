#include <stdio.h>

int main() 
{
    int i,a,b,c,n;
    a=0;
    b=1;
    scanf("%d", &n);
    if (n<1)
        printf("Error input\n");
    for (i = 1; i <= n; i++) 
{
    if (i<=1)
{
        c=i;
}
    else
{
        c=a+b;
        a=b;
        b=c;
}
    printf("%d ",c);
}
return 0;
}    

