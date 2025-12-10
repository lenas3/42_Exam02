#include <stdio.h>
#include <stdlib.h>

int is_prime(int nb)
{
    int i;

    if(nb < 2)
        return 0;
    if(nb == 2)
        return 1;

    i = 2;
    while(i * i <= nb)
    {
        if(nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}
int main(int argc, char **argv)
{
    int a;
    int i = 2;
    int first = 1;

    if(argc == 2)
    {
        a = atoi(argv[1]);
        if(a == 1)
        {
            printf("1\n");
            return 0;
        }
        if(a == 2)
        {
            printf("2\n");
            return 0;
        }
        while(a > 2)
        {
            if(is_prime(i))
            {
                while((a % i == 0))
                {
                    if(!first)
                        printf("*");
                    printf("%d", i);
                    a = a / i;
                    first = 0;
                }
            }
            i++;
        }
    }
    printf("\n");
    return 0;
}