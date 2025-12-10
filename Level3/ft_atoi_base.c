int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i])
    {
        int val;

        if(str[i] >= '0' && str[i] <= '9')
            val = str[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'z') 
            val = str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'Z') 
            val = str[i] - 'A' + 10;
        else 
            break;
        if(val >= str_base)
            break;
        res = res * str_base + val;
        i++;
    }
    return (res *sign);
}
