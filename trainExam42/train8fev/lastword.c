#include <unistd.h>



void    lword(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    i--;
    while (s[i] && isp(s[i]))
        i--;
    while (s[i] && !isp(s[i]))
        i--;
    i++;
    while (s[i] && !isp(s[i]))
    {
        write (1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        lword(av[1]);
    }
    write (1, "\n", 1);
    return (0);
}