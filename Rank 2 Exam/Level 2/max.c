
int max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int max = 0;
    if (len == 0)
        return (0);
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}