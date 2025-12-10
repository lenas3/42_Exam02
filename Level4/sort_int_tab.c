void ft_swap(int *a, int *b)
{
    int temp;

    temp = *b;
    *b = *a;
    *a = temp;

}

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    while(i < size)
    {
        if(tab[i] > tab[i + 1])
        {
            ft_swap(tab[i], tab[i+1]);
            i = 0;
        }
        else
            i++;   
    }
}