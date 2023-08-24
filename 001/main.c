#include "stdio.h"

int main(int ac, char **av)
{
    int i;
    int toplam;

    i = 1;
    toplam = 0;
    while (i <= 100)
    {
        toplam += i;
        i++;
    }

    printf("1 den 100 e kadar olan sayilarin toplami : %d", toplam);

    return (0);
}