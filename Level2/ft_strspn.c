#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;

    while(s[i])
    {
        j = 0;
        while(accept[j])
        {
            if(s[i] == accept[j])
                break;
            j++;
        }
        if (!accept[j])
            return i;
        i++;
    } 
    return i;
}
