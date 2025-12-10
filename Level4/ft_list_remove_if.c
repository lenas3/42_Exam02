ft_list_remove_if(t_list **begin_list, t_list *data_ref, int (*cmp)())
{
    t_list *temp = *begin_list;
    while(temp)
    {
      if((*cmp)(data_ref, temp->data))
        free(temp->data);
      temp = temp->next;
    }
}
