#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc >= 2)
    {
        int i = 0;
        int start = 0;
        int end = 0;
        char *str = argv[1];

        while(str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        
        start = i;
        while(str[i] && str[i] != ' ' && str[i] != '\t')
            i++;
        end = i - 1;

        while(start <= end)
        {   
            write(1, &str[start], 1);
            while(str[start] == ' ' && str[start] != '\t')
                start++;
            start++;
        }

    }
    write(1, "\n" ,1);
    return 0;
}