
#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}

// void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
// {
//     t_list *curr = begin_list;
//     while (curr)
//     {
//         (*f)(curr->data);
//         curr = curr->next;
//     }
// }
