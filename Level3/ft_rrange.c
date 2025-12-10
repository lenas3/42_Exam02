#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int len = 0;
    int *arr;
    int i = 0;

    len = end - start;
    if(len < 0)
        len *= -1;
    arr = malloc((len + 1) * sizeof(int));
    if(!arr)
        return(NULL);
    while(i <= len)
    {
        if(start <= end)
            arr[i++] = end--;
        else if(start >= end)
            arr[i++] = end++;
    }
    return (arr);
}
