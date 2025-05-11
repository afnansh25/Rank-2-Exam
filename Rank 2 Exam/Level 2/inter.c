
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    
    if (ac == 3)
    {
        while (av[1][i])
        {
            int j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    int k = 0;
                    int dup = 0;
                    while (k < i)
                    {
                        if (av[1][i] == av[1][k])
                        {
                            dup = 1;
                            break;
                        }
                        k++;
                    }
                    if (!dup)
                        write (1, &av[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}