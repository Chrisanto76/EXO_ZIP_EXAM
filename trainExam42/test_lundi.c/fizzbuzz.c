#include <unistd.h>

void    putbnr(int nb)
{
    if (nb > 9)
        putbnr(nb / 10);
    write (1, &"0123456789"[nb % 10], 1);
}

int main(void)
{
    int nb;

    nb = 1;
    while (nb <= 100)
    {
        if (nb % 3 == 0 && nb % 5 == 0)
            write (1, "fizzbuzz", 8);
        else if (nb % 3 == 0)
            write (1, "fizz", 4);
        else if (nb % 5 == 0)
            write (1, "buzz", 4);
        else
            putbnr(nb);
        write (1, "\n", 1);
        nb++;
    }
}