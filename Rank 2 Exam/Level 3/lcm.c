
unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0 )
        return (0);
    unsigned int n = b;
    if (a > b)
        n = a;
    while (n % a || n % b)
        n++;
    return (n);
}

#include <stdio.h>

int main (void)
{
    printf("%u", lcm(6, 8));
}