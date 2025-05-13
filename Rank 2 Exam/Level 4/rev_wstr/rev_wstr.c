
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 2 && *av[1])
    {
        int i = 0;
        while (av[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
                i--;
            if (i < 0)
                break;
            int end = i;
            while (i >= 0 && av[1][i]&& av[1][i] != ' ' && av[1][i] != '\t')
                i--;
            int start = i+1;
            while (start <= end)
            {
                write (1, &av[1][start], 1);
                start++;
            }
            if (i >= 0)
            write (1, " ", 1);
        }
    }
    write (1, "\n", 1);
    return (0);
}