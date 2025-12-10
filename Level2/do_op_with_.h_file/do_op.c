#include "do_op.h"

int main(int argc, char **argv)
{
    int str1;
    int str3;
    char op;
    int result;

    if(argc < 4)
    {
        printf("\n");
        return 0;
    }
    
    str1 = atoi(argv[1]);
    str3 = atoi(argv[3]);
    op = argv[2][0];
    
    if(op == '+')
        result = str1 + str3;
    else if(op == '-')
        result = str1 - str3;
    else if(op == '*')
        result = str1 * str3;
    else if(op == '/')
        result = str1 / str3;
    else if(op == '%')
        result = str1 % str3;
    
    printf("%d\n", result);
}
