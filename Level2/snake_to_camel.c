#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char *str;
    char *res;
    int i = 0;
    int j = 0;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    
    str = argv[1];
    while(str[i])
        i++;
    res = malloc((i + 1) * sizeof(char));
    
    i = 0;
    
    while(str[i])
    {
        if(str[i] != '_')
        {
            res[j] = str[i];
            j++;
        }
        if(str[i] == '_')
        {
            res[j] = str[i+1] - 32;
            i++;
            j++;
        }
        i++;
    }
    res[j] = '\0';

    i = 0;
    while(res[i])
    {
        write(1, &res[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}