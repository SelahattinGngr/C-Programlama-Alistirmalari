#include "stdio.h"
#include "stdlib.h"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int s1;
        int s2;
        int s3;
        int buyuk;
        int kucuk;

        s1 = atoi(av[1]);
        s2 = atoi(av[2]);
        s3 = atoi(av[3]);

        buyuk = s1;
        kucuk = s1;
        if (buyuk < s2)
            buyuk = s2;
        if (buyuk < s3)
            buyuk = s3;
        if (kucuk > s2)
            kucuk = s2;
        if (kucuk > s3)
            kucuk = s3;

        printf("en buyuk : %d\nen kucuk : %d", buyuk, kucuk);
    }
    else
        printf("lutfen 3 arguman girin\n");

    return (0);
}