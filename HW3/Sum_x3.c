#include <stdio.h>

int main(void)
{
int n;
int sum;
scanf ("%d", &n);
sum = n%10; 
sum += (n/10)%10; 
sum += (n/100)%10; 
printf ("%d", sum);
return 0;
}
