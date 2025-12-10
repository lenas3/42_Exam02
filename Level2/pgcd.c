#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, temp;

    if(argc < 3)
    {
        printf("\n");
        return 0;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    while(b !=  0)
    {
        temp = b;
        b = a % b;
        a = temp;
        if(b == 0)
            printf("%d\n", a);
    }
    return 0;
}