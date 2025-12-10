#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        i++;
    while(str[i] == '+' ||str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res * sign);
}

void print_hex(int nb)
{
    char *hex = "0123456789abcdef";

    if(nb >= 16)
        print_hex(nb / 16);
    write(1, &hex[nb%16], 1);
}
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int nb = ft_atoi(argv[1]);
        print_hex(nb);
    }
    write(1, "\n", 1);
    return 0;
}