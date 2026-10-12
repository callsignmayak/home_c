#include <stdio.h>

int main(void)
{
 int n, i, sum = 0;
 scanf("%d", &n);
 i = 0;
 while (n != 0)
 {
 i++;
 sum+= n % 10;
 n = n / 10;
 }
 printf("%d ", sum);
 return 0;
}
