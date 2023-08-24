#include "stdio.h"
#include "stdlib.h"

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i;
        char c;

        if (av[2][0] <= '9' && av[2][0] >= '0')
            i = av[2][0] - '0';
        else
        {
            printf("lutfen sayi girin !!!!!!!!!");
            exit(0);
        }

        while (i--)
            printf("%c ", av[1][0]);
    }
    else
        printf("hatali arguman sayisi :(");

    return (0);
}