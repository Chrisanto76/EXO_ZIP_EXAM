#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *tab;
    int len;
    int i;

    len = 0;
    if (start <= end)
        len = end - start;
    else
        len = start -end;
    tab = (int *) malloc(sizeof(* tab) * (len + 1));
    if (!tab)
        return (NULL);
    i = 0;
    while (i < len + 1)
    {
        if (start <= end)
            tab[i] = end - i;
        else
            tab[i] = end + i;
        i++;
    }
    return (tab);
}

int main(void)
{
    int *tab;
    int start;
    int end;
    int i;

    start = 0;
    end = -3;
    i = 0;
    tab = ft_rrange(start, end);
    printf ("\nREVERSE RANGE OF (%d, %d) RETURNS : ", start, end);
    while (i < 4)
    {
        printf ("|%d|", tab[i]);
        i++;
    }
    free (tab);
    return (0);
}
