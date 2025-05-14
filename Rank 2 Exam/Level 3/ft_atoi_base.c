/*

Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);

*/

int isvalid(char s, int str_base)
{
    char    lc[] = "0123456789abcdef";
    char    uc[] = "0123456789ABCDEF";
    
    int i = 0;
    while (i < str_base)
    {
        if (s == lc[i] || s == uc[i] )
            return (1);
        i++;
    }
    return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] && isvalid(str[i], str_base))
    {
        res *= str_base;
        if (str[i] >= '0' && str[i] <= '9')
            res += str[i] -'0';
        if (str[i] >= 'a' && str[i] <= 'f')
            res += str[i] -'a' + 10;
        if (str[i] >= 'A' && str[i] <= 'F')
            res += str[i] -'A' +10;
        i++;
    }
    return (res * sign);
}

#include <stdio.h>

int main (void)
{
    printf ("%d\n", ft_atoi_base("+2f", 16));
    printf ("%d\n", ft_atoi_base("\t\n\r -42", 10));
    printf ("%d\n", ft_atoi_base("124fa", 10));
    printf ("%d\n", ft_atoi_base("19", 8));
    printf ("%d\n", ft_atoi_base("123xyz", 16));
    printf ("%d\n", ft_atoi_base(" ", 10));
    printf ("%d\n", ft_atoi_base("-", 10));
    printf ("%d\n", ft_atoi_base("g12", 16));
    printf ("%d\n", ft_atoi_base("--34", 10));
    printf ("%d\n", ft_atoi_base("-3-4", 10));
}