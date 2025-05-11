
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        if (!*av[1] || av[1][0] == '-')
            return (printf("\n"));
        int n = atoi(av[1]);
        if (n == 1)
            return (printf ("1\n"));
        int i = 2;
        while (n >= i)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                if (n == i)
                    break;
                printf("*");
                n /= i;
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}