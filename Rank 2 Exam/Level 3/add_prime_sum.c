/*

Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>

*/

#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res);
}

int is_prime (int n)
{
    int i = 2;
    if (n <= 1)
        return (0);
    while (i < n)
    {
        if (n % i == 0)
            return(0);
        i++;
    }
    return (1);
}

void putnbr(int n)
{
    char digit;
    if (n >= 10)
        putnbr(n/10);
    digit = n % 10 + '0';
    write (1, &digit, 1);
}

int main(int ac, char **av)
{
    int num;

    if (ac == 2)
    {
        num = ft_atoi(av[1]);
        if (num <= 0)
        {
            write (1, "0\n", 2);
            return (0);
        }
        int sum = 0;
        while (num > 0)
        {
            if (is_prime(num))
                sum += num;
            num--;
        }
        putnbr(sum);
        write (1, "\n", 1);
    }
    else
        write(1, "0\n", 2);
    return (0);
}