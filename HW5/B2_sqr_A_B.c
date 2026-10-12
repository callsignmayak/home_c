#include <stdio.h>

int main() 
{
    int a,b;
    scanf("%d%d", &a,&b);
    if (a>b)
        printf("Error input\n");
    for (int n = a; n <= b; n++) 
        printf("%d ", n*n);
    return 0;
}
