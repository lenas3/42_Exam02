#include <unistd.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    char *s;

    while(str[i] && str[i] == ' ' ||  str[i] == '\t' || str[i] == '\r' ||
            str[i] == '\f'|| str[i] == '\n' || str[i] == '\v')
        i++;

    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}

void putnbr(int nbr)
{
    int i = 0;
    char c;
    if(nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1;
    }

    if(nbr >= 10)
        putnbr(nbr / 10);
    c = (nbr % 10) + '0';
    write(1, &c, 1);
}
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 1;
        int nbr = ft_atoi(argv[1]);

        while(i < 9)
        {
            putnbr(i);
            write(1, " x ", 3);
            putnbr(nbr);
            write(1, " = ", 3);
            putnbr(i * nbr);
            write(1, "\n", 1);
            i++;
        }
        if(i == 9)
        {
            putnbr(i);
            write(1, " x ", 3);
            putnbr(nbr);
            write(1, " = ", 3);
            putnbr(i * nbr);
        }
    }
    write(1, "\n", 1);
    return 0;
}