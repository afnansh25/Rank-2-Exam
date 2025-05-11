
unsigned char reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char res = 0;

    while (i < 8)
    {
        res <<= 1;
        res |= (octet >> i) & 1;
        i++;
    }
    return (res);
}

#include <stdio.h>

int main(void)
{
    printf ("%d\n", reverse_bits(2));
}