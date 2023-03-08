#include <stdio.h>
#include <stdlib.h>

int len(long n)
{
    int len;

    len = 0;
    if (n < 0)
    {
        n = n * -1;
        len++;
    }
    while (n > 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    char    *str;
    long    n;
    int     i;

    n = nbr;
    i = len(n);
    if (!(str = (char *) malloc(sizeof(char) * (i + 1))))
        return (NULL);
    str[i--] = '\0';
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (n < 0)
    {
        str[0] = '-';
        n = n * -1;
    }
    while (n > 0)
    {
        str[i] = '0' + (n % 10);
        n = n / 10;
        i--;
    }
    return (str);
}

int main(int ac, char **av)
{
    char    *str;

    if (ac != 2)
        return (0);
    str = ft_itoa(atoi(av[1]));
    printf ("ITOA RETURNS :\n%s", str);
    free (str);
    return (0);
}
