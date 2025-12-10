#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
	i = 0;
    while(argv[1][i] != '\0')
        i++;
    j = i - 1;

    while(j > 0 && argv[1][j - 1] != ' ' && argv[1][j- 1] != '\t')
        j--;
    while(argv[1][j] != '\0')
    {
        write(1, &argv[1][j], 1);
        j++;
    }
    write(1, "\n", 1);
    return 0;
}