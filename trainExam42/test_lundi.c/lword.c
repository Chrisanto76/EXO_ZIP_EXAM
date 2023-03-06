#include <unistd.h>

int isp(char c)
{
    return (c == ' ' || c == '\t');
}


int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        while (av[1][i] && isp(av[1][i]))
            i--;
        while (av[1][i] && !isp(av[1][i]))
            i--;
        i++;
        while (av[1][i] && !isp(av[1][i]))
        {
            write (1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}