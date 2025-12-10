/*
input:  Hello World!
output: !dlroW olleH
*/

char    *ft_strrev(char *str)
{
    int i = 0;
    int j;
    char tmp;

    while(str[i] != '\0')
        i++;

    j = i - 1;
    i = 0;
    while(i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp; 
        j--;
        i++;
    }
    return (str);
}
