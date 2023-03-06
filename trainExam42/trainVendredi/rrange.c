#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int *tab;
    int len;
    int i;

    i = 0;
    if (start <= end)
        len = end - start;
    else
        len = start - end;
    tab = (int *) malloc(sizeof(* tab) * (len + 1));
    if (!tab)
        return (NULL);
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

    start = 1;
    end = 3;
    printf ("\nREVERSE RANGE OF (%d, %d) RETURNS....", start, end);
    tab = ft_rrange(start, end);
    while (i < 3)
    {
        printf ("|%d|", tab [i]);
        i++;
    }
    free (tab);
    return (0);
}
