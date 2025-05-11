
#include <stdlib.h>

int num_len (int n)
{
    int i = 0;

    if (n < 0)
    {
        n *= -1;
        i++;
    }
    if (n == 0)
        i++;
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int nbr)
{
    if (nbr == -2147483648)
        return ("-2147483648");
    int len = num_len(nbr);
    int n = nbr;
    char *s = malloc(sizeof (char *) * len + 1);
    if (!s)
        return (0);
    s[len] = '\0';
    len--;
    if (n == 0)
        s[len] = '0';
    if (n < 0)
    {
        s[0] = '-';
        n *= -1;
    }
    while (n > 0)
    {
        s[len] = n % 10 + '0';
        n /= 10;
        len--;
    }
    return (s);
}

#include <stdio.h>
int main(void)
{
    printf ("%s\n", ft_itoa(-13632));
}