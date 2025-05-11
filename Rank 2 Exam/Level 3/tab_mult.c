#include <unistd.h>

int ft_atoi(char *s)
{
    int i=0;
    int n=0;

    while (s[i] && s[i] >= '0' && s[i] <= '9')
    {
        n = n * 10 + (s[i] - '0');
        i++;
    }    
    return (n);
}

void ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    char c = n % 10 + '0';
    write (1, &c, 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int n = ft_atoi(av[1]);
        int i = 1;
        while ( i <= 9)
        {
            ft_putnbr(i);
            write (1, " x ", 3);
            ft_putnbr(n);
            write (1, " = ", 3);
            ft_putnbr(i * n);
            write (1, "\n", 1);
            i++;
        }

    }
    else
        write (1, "\n", 1);
}