#include "stdio.h"

int main(int ac, char **av)
{
    int s1;
    int s2;
    int s3;
    int buyuk;
    int kucuk;

    printf("lutfen 3 adet sayi girin\n");
    scanf("%d %d %d", &s1, &s2, &s3);

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

    return (0);
}