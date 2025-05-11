
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int k = 0;
    int dup = 0;

    if (ac == 3)
    {
        while (av[1][i])
        {   
            dup = 0;
            k = 0;
            while (k < i)
            {
                if (av[1][k] == av[1][i])
                {
                    dup = 1;
                    break;
                }
                k++;
            }
            if (!dup)
                write (1, &av[1][i], 1);
            i++;
        }
        i = 0;
        while (av[2][i])
        {
            k = 0;
            dup = 0;
            while (av[1][k])
            {
                if (av[1][k] == av[2][i])
                {
                    dup = 1;
                    break;
                }
                k++;
            }
            if (!dup)
            {
                dup = 0;
                k = 0;
                while (k < i)
                {
                    if (av[2][k] == av[2][i])
                    {
                        dup = 1;
                        break;
                    }
                    k++;
                }
                if (!dup)
                    write (1,  &av[2][i], 1);
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}