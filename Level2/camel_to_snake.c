#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int len = 0;
    char *new_str;

    if(argc < 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    while(argv[1][len] != '\0')
        len++;
    new_str = malloc(((2 * len) + 1) * sizeof(char));
    
    while(argv[1][i] != '\0')
    {       
        if(argv[1][i] >= 65 && argv[1][i] <= 90)
        {
            new_str[j++] = '_';
            new_str[j] = argv[1][i] + 32;
            j++;
        }
        else
            new_str[j++] = argv[1][i];
        i++;
    }
    new_str[j] = '\0';

    j = 0;
    while(new_str[j] != '\0')
    {
        write(1, &new_str[j], 1);
        j++;
    }
    free(new_str);
    return 0;
}
