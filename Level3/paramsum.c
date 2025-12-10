#include <unistd.h> 

int ft_putnbr(int n)
{
    if(n < 0)
    {
        write(1, "-", 1);
        n *= -1;
    }
    if(n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else 
    {
        n += '0';
        write(1, &n, 1);
    }

}
int main(int argc, char **argv)
{
    if(argc == 1)
        write(1, "0", 1);
    else if(argc > 1)
        ft_putnbr(argc - 1);
    write(1, "\n", 1);
    return 0;
}