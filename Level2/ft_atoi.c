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