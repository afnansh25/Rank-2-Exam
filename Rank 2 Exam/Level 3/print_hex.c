
#include <unistd.h>

int ft_atoi(char *s)
{
    int i = 0;
    int n = 0;

    while (s[i] >= '0' && s[i] <= '9')
    {
        n = n * 10 + (s[i] - '0');
        i++;
    }
    return (n);
}

void ft_putnbr_hex(int n)
{
    char d[] = "0123456789abcdef";
    if (n >= 16)
        ft_putnbr_hex(n/16);
    write (1, &d[n%16], 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int n = ft_atoi(av[1]);
        ft_putnbr_hex(n);
    }
    write (1, "\n", 1);
    return (0);
}