#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char *str; 
    int argcount = 1;

    if(argc <= 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    while(argcount < argc)
    {
        i = 0;
        str = argv[argcount];
        while(str[i])
        {
            if((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
                && str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
            else if (!(str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
                && str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
            write(1, &str[i], 1);
            i++;
        }
        write(1, "\n", 1);
        argcount++;
    }
}