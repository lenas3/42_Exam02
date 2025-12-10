#include "list.h"
#include <stdio.h>

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *temp;
    int value;

    temp = lst;
    if(!lst)
        return NULL;
    while(lst && lst->next)
    {
        if(((*cmp)(lst->data, lst->next->data)) == 0)
        {
            value = lst->data;
            lst->data = lst->next->data;
            lst->next->data = value;
            lst = temp;
        }
        else
            lst = lst->next;
    }
    return temp;

}