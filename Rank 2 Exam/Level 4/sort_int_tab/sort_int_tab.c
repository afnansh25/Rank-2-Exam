// Assignment name  : sort_int_tab
// Expected files   : sort_int_tab.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write the following function:

// void sort_int_tab(int *tab, unsigned int size);

// It must sort (in-place) the 'tab' int array, that contains exactly 'size'
// members, in ascending order.

// Doubles must be preserved.

// Input is always coherent.

void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int swap;

    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            swap = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = swap;
            i=0;
        }
        else
            i++;
    }
}

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size);

int main(void)
{
    int arr[] = {5, 3, 1, 4, 2};
    unsigned int size = 5;

    sort_int_tab(arr, size);

    for (unsigned int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
