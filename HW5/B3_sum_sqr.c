#include <stdio.h>

int main() 
{
    int a,b,sum=0;
    scanf("%d%d", &a,&b);
    if (a>b)
        printf("Error input\n");
    for (int n = a; n <= b; n++) 
{
        int square = n * n; 
        sum += square;  
}
        printf("%d ", sum);
    return 0;
}    

