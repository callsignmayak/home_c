#include <stdio.h>

int main(void)
{
int n;
int mult;
scanf ("%d", &n);
mult = n%10; 
mult *= (n/10)%10; 
mult *= (n/100)%10; 
printf ("%d", mult);
return 0;
}
