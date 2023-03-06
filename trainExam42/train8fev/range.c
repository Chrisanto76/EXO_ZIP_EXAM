#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *tab;
    int len;
    int i;

    len = 0;
    i = 0;
    if (start <= end)
        len = end - start;
    else
        len = start - end;
    tab = (int *) malloc(sizeof(* tab) * (len + 1));
    if (!tab)
        return (NULL);
    while (i <= len)
    {
        if (start <= end)
            tab[i] = start + i;
        else
            tab[i] = start - i;
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
    tab = ft_range(start, end);
    printf ("\nRANGE OF (%d, %d) RETURN ARRAY CONTAINING : ", start, end);
    while (i < 3)
    {
        printf ("|%d|", tab[i]);
        i++;
    }
    free (tab);
}