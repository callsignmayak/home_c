#include <stdio.h>
 
int main(void)
{
char msg;
    for(scanf("%c", &msg); msg != '.' ; scanf("%c", &msg))
    {
        if  (msg >='A' && msg <= 'Z')
            msg += 0x20;
        if  (msg != '.')
            printf("%c", msg);
    }
    return 0;
}
