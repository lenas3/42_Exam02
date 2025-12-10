#include <unistd.h>

int is_printed(char *str, char c, int index)
{
    int i = 0;

    while(i < index)
    {
        if(str[i] == c)
            return 0;
        i++;
    }
    return 1;
}
int is_in_str(char *str, char c)
{
    int i = 0;
    while(str[i])
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
        int j = 0;
        char *s1 = argv[1];
        char *s2 = argv[2];

        while(s1[i])
        {
            if(is_printed(s1, s1[i], i) && is_in_str(s2, s1[i]))
                write(1, &s1[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}