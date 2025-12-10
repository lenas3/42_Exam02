#include <unistd.h>
#include <stdio.h>

int is_prime(int n)
{
    int i;

    if(n < 2)
        return 0;
    if(n == 2)
        return 1;
    i = 2;
    while(i * i <= n)
    {
        if(n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while(str[i] == ' ' || str[i] == '\t' ||str[i] == '\r' ||
        str[i] == '\f' || str[i] == '\n' ||str[i] == '\v' )
            i++;
    while(str[i] == '-' || str[i] == '+')
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
    return (sign*result);
}
int ft_putnbr(int n)
{
    char c;
    if(n >= 10)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}
int main(int argc, char **argv)
{
    int n;
    int prime;
    int sum = 0;

    if(argc != 2 || ft_atoi(argv[1]) <= 0)
    {
        write(1, "0", 1);
        write(1, "\n", 1);
        return 0;
    }

    n = ft_atoi(argv[1]);
    prime = 0;
    while(prime <= n)
    {
        if(is_prime(prime))
            sum += prime;
        prime++;
    }
    ft_putnbr(sum);
    write(1, "\n", 1);
    return 0;
}