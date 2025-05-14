/*

Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$

*/

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