int max(int* tab, unsigned int len)
{
    int i = 0;

    if(len == 0)
        return 0;

    int value = tab[0];
    while(i < len)
    {
        if(tab[i] > value)
            value = tab[i];
        i++;
    }
    return value;
}