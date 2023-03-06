#include <stdio.h>
#include <unistd.h>

int    pva(char *s, int pos, char c)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (s[i] == c)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

void    ft_union(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    while (s1[i])
    {
        if (pva(s1, i, s1[i]))
            write (1, &s1[i], 1);
        i++;
    }
    j = 0;
    while (s2[j])
    {
        if (pva(s1, i, s2[j]) && pva(s2, j, s2[j]))
           write (1, &s2[j], 1);
        j++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_union(av[1], av[2]);
    }
    write (1, "\n", 1);
    return (0);
}