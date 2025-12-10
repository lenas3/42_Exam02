#include <unistd.h>

int is_in(char *str, char c)
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

        while(s1[i] && s2[j])
        {
            if(s1[i] == s2[j])
                i++;
            j++;
            if(s1[i] == '\0')
            {
                i = 0;
                while(s1[i])
                {
                    write(1, &s1[i], 1);
                    i++;
                }
            }
        }
        j++;
    }
    write(1, "\n", 1);
    return 0;
}