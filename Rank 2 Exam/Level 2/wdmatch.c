/*

Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
forty two$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$

*/

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    int j = 0;
    int len1 =0;
    int lenmatch = 0;

    if (ac == 3)
    {
        while (av[1][len1])
            len1++;
        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    lenmatch++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (len1 == lenmatch)
        {
            i = 0;
            while (av[1][i])
            {
                write (1, &av[1][i], 1);
                i++;
            }
        }
    }
    write (1, "\n", 1);
    return (0);
}