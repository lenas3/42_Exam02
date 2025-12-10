#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int firs_word = 1;
    char *str;

    if(argc == 2)
    {
        str = argv[1];
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        if(!str[i])
        {
            write(1, "\n", 1);
            return 0;
        }
        while(str[i] != '\0')
        {
            if(str[i] != ' ' && str[i] != '\t')
            {
                if(!firs_word)
                   write(1, "   ", 3); 
                firs_word = 0;
                while (str[i] && str[i] != ' ' && str[i] != '\t')
                {
                    write(1, &str[i], 1);
                    i++;
                }
            }
            while (str[i] == ' ' || str[i] == '\t')  
                i++;
        }        
        
    }
    write(1, "\n", 1);
    return 0; 
}