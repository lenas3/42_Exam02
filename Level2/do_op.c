#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b;
    char op;
    char *str;
    int result = 0;
    int i = 0;

    if(argc == 4)
    {
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        op = argv[2][0];
        str = argv[1];
        while(str[i])
        {
            if(op == '+')
                result = a + b;
            else if(op == '%')
                result = a % b;
            else if(op == '-')
                result = a - b;
            else if(op == '*')
                result = a * b;
            else if(op == '/')
                result = a / b;
            i++;
        }
        printf("%d", result);
    }
    printf("\n");
    return 0;
}