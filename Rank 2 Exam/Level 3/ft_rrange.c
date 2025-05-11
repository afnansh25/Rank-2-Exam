
#include "stdlib.h"

int ft_abs (int n)
{
    if (n < 0)
        return (-n);
    else
        return (n);
}

int *ft_range(int start, int end)
{
    int i = 0;
    int len;
    int *res;

    len = ft_abs((end - start)) + 1;
    res = (int *)malloc(sizeof(int) * len);

    while (i < len)
    {
        if (start < end)
        {
            res[i] = end;
            end--;
        }
        else
        {
            res[i] = end;
            end++;
        }
        i++;
    }
    return(res);
}