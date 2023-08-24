#include "stdio.h"
#include "stdlib.h"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;
        int max;
        int toplam;

        i = 0;
        max = atoi(av[1]);
        toplam = 0;
        while (i <= max)
        {
            toplam += i;
            i++;
        }
        printf("1 den %d sayisina kadar olan sayilarin toplami : %d", max, toplam);
    }
    else
        printf("lutfen 1 adet arguman girin\n");

    return (0);
}