#include <stdlib.h>

int numlen(long nbr)
{
    long len = 0;

    if(nbr == 0)
        return 1;
    if(nbr < 0)
        len++;
    while(nbr)
    {
        nbr /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int nbr)
{
    char *res;
    long len = numlen(nbr);
    res = malloc((len + 1) * sizeof(char));
    if(!res)
        return 0;
    res[len] = '\0';
    len--;

    if(nbr < 0)
    {
        res[0] = '-';
        nbr *= -1;
    }
    if(nbr == 0)
    {
        free(res);
        return("0");
    }
    while(nbr)
    {
        res[len] = (nbr % 10) + '0';
        len--;
        nbr /= 10;
    }
    return res;
}