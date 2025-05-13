#include <unistd.h>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 0;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        int start = i;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            i++;
        int end = i;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        int first = 1;
        while (av[1][i])
        {
            if (av[1][i] != ' ' && av[1][i] != '\t')
            {
                if (!first)
                    write (1, " ", 1);
                first = 0;
                while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
                {
                    write (1, &av[1][i], 1);
                    i++;
                }
            }
            else
                i++;
        }
        if (!first)
            write (1, " ",1);
        write (1, &av[1][start], end - start);
    }
    write (1, "\n", 1);
    return (0);
}