#include <stdio.h>
#include <stdlib.h>

int isp(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

char    **ft_split(char *str)
{
    char    **tab;
    int     line;
    int     wrd;
    int     i;

    line = 0;
    i = 0;
    if (!str)
        return (NULL);
    tab = malloc(sizeof(char *) * 1000);
    if (!tab)
        return (NULL);
    while (isp(str[i]))
        i++;
    while (str[i])
    {
        if (str[i] > 32)
        {
            wrd = 0;
            tab[line] = malloc(sizeof(char *) * 1000);
            if (!tab[line])
                return (NULL);
            while (str[i] > 32)
                tab[line][wrd++] = str[i++];
                    tab[line][wrd] = '\0';
            line++;
        }
        else
            i++;
    }
    tab[line] = NULL;
    return (tab);
}

int main(void)
{
    char **warr;
    char *str;
    int i;

    i = 0;
    str = "Salut  \t\t\t\n les copains, ca va ? \n\t  la forme ou bien ?";
    warr = ft_split(str);
    while (warr && warr[i])
    {
        printf ("%s\n", warr[i]);
        i++;
    }
    i = 0;
    while (warr[i])
    {
        free (warr[i]);
        i++;
    }
    free (warr);
    return (0);

}