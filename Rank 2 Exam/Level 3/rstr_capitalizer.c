
#include <unistd.h>

void revstr(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if (s[i] >= 'a' && s[i] <= 'z' && (s[i + 1] ==' ' || s[i + 1]== '\t' || s[i + 1] == '\0'))
            s[i] -= 32;
        write (1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i;
        while (av[i])
        {
            revstr(av[i]);
            write (1, "\n", 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}