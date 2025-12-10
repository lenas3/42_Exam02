#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    char *str;

    if (argc == 2)
    {
        str = argv[1];
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        j = i;

        if (!str[i]) 
        {
            write(1, "\n", 1);
            return 0;
        }

        while (str[i])
        {
            if (str[i] == ' ' || str[i] == '\t')
            {
                write(1, " ", 1);
                while (str[i] == ' ' || str[i] == '\t')
                    i++;
            }
            else
            {
                write(1, &str[i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}
