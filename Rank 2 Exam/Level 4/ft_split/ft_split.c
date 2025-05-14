/*

Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);

*/

#include <stdlib.h>

char **ft_split(char *str)
{
    int i = 0;
    int k = 0;
    int start = 0;
    int end = 0;
    char **split = (char **)malloc(sizeof (char *) * 5000);
    if (!split)
        return (NULL);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while (str[i])
    {
        start = i;
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
        end = i;
        split[k] = (char *)malloc(sizeof (char) * (end - start + 1));
        if (!split)
            return (NULL);
        int j = 0;
        while(start < end)
        {
            split[k][j] = str[start];
            j++;
            start++;
        }
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        split[k][j] = '\0';
        k++;
    }
    split[k] = NULL;
    return (split);
}

#include <stdio.h>
int main (void)
{
    char *str = "hello, my name is \t Afnan\n";
    char **split = ft_split(str);
    int i = 0;
    while (split[i])
    {
        printf("%s\n", split[i]);
        i++;
    }
    return (0);
}