#include <unistd.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}

int pds(char *s, int pos, char c)
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

void    inter(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i])
    {
        if (pds(s1, i, s1[i]))
        {
            if (!pds(s2, ft_strlen(s2), s1[i]))
                write (1, &s1[i], 1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        inter(av[1], av[2]);
    }
    write (11, "\n", 1);
    return (0);
}