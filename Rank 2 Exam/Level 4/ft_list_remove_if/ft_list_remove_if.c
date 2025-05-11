typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{

    if(*begin_list == 0 || begin_list == 0)
        return;
    t_list *curr = *begin_list;
    if (cmp(curr->data, data_ref) == 0)
    {
        *begin_list = curr->next;
        free(curr);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
    {
        ft_list_remove_if(&curr->next, data_ref, (*cmp));
    }
}
