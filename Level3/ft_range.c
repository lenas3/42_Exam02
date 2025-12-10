#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *arr;
    int i = 0;
    int len = 0;

    len = end - start;
    if(len < 0)
        len *= -1;
    arr = malloc((len + 1)* sizeof(int));
    if(!arr)
        return (NULL);
    while(i <= len)
    {
        if(start <= end)
            arr[i++] = start++;
        else if(start >= end)
            arr[i++] = start--;
    }
    return (arr);
}
