#include <unistd.h>

int is_printed(char *str, char c, int index)
{
    int i = 0;
    while(i < index)
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0;
        char *str1 = argv[1];
        char *str2 = argv[2];

        while(str1[i])
        {
            if(!is_printed(str1, str1[i], i))
                write(1, &str1[i], 1);
            i++;
        }

        int j = 0;
        while(str2[j])
        {
            if(!is_printed(str2, str2[j], j) && !is_printed(str1, str2[j], i))
                write(1, &str2[j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}