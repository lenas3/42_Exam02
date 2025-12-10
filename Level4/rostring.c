#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int wordlen = 0;
    int start_word = 0;
    int end_word = 0;
    char *word;
    char *str;

    if(argc < 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    str = argv[1];

    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    start_word = i;

    while(str[i] && str[i] != ' ' && str[i] != '\t')
            i++;

    end_word =  i;
    wordlen = end_word - start_word;
    word = malloc((wordlen + 1) * sizeof(char));
    if(!word)
        return 0;

    j = 0;
    while(j < wordlen)
    {
        word[j] = str[start_word + j];
        j++;
    }
    word[j] = '\0';

    while(str[i] == ' ' || str[i] == '\t')
        i++;
    int remaining_start = i;
    int remaining_end = remaining_start;
    while(str[remaining_end])
        remaining_end++;

    remaining_end--;
    while(remaining_end >= remaining_start && (str[remaining_end] == ' ' || str[remaining_end] == '\t'))
        remaining_end--;
    remaining_end++;


    while(i < remaining_end)
    {
        if(str[i] == ' ' ||str[i] == '\t')
        {
            write(1, " ", 1);
            while(str[i] == ' ' || str[i] == '\t')
                i++;
        }
       else
       {
            write(1, &str[i], 1);
            i++;
       }
    }

    int k = 0;
    if(remaining_end > remaining_start)
        write(1, " ", 1);
    while(word[k])
    {
        write(1, &word[k], 1);
        k++;
    }
    write(1, "\n", 1);
    free(word);
    return 0;
