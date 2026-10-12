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
 if(sum==10)
 {
    printf("YES");
    return 0;
 }
else
 {
    printf("NO");
    return 0;
 }
 return 0;
}
