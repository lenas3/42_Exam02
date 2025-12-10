void fill(char **tab, t_point size, char target, int x, int y)
{
    if(x < 0 || y < 0)
        return ;
    if(x > size.x || y > size.y)
        return ;
    if(tab[y][x] != target)
        return ;
    tab[y][x] = 'F';

    fill(tab, size , target, x + 1, y);
    fill(tab, size , target, x - 1, y);
    fill(tab, size , target, x, y +1);
    fill(tab, size , target, x, y -1);
}


void  flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x];
    if(target == 'F')
        return ;
    fill(tab, size, target, begin.x, begin.y);
}