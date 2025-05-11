
#include <stdlib.h>

int ft_abs(int n)
{
    if (n < 0)
        return -n;
    else
        return n;
}

int *ft_range(int start, int end)
{
    int i = 0;
    int len = ft_abs((end - start)) + 1;
    int *res = (int *)malloc(sizeof(int) * len);

    while (i < len)
    {
        if (start < end)
        {
            res[i] = start;
            start++;
            i++;
        }
        else
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return (res);
}

#include <stdio.h>

int main(void)
{
    int i = 0;
    int *arr = ft_range (3, 5);
    while (arr[i])
    {
        printf ("%d\n", arr[i]);
        i++;
    }
    return (0);
}