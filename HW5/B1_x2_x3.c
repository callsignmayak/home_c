#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0 || n > 100) 
    {
        printf("Error input\n");
        return 0;
    }
    for (int i = 1; i <= n; i++) 
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    return 0;
}
