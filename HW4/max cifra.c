#include <stdio.h>

int main(void)
{
int abc, a, b, c, max;
scanf ("%d", &abc);
a = abc%10; 
b = (abc/10)%10; 
c = (abc/100)%10; 
max= a>b ? a : b;
max = max> c ? max: c;
printf("%d", max);
return 0;
}
