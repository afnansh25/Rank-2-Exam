
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i] != '\0')
            i++;
        i--;
        while ((av[1][i] >= 9 && av[1][i] <= 13) || (av[1][i] == 32 && i >= 0))
            i--;
        while (i >= 0)
        {
            if ((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == 32)
                break;
            i--;
        }
        i++;
        while ((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == 32 || av[1][i] != '\0')
        {
            write (1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}