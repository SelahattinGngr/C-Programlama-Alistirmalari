#include "stdio.h"

int main(int ac, char **av)
{
    int basamak;
    int sayac;
    int sayi;
    int tmp;

    printf("bir sayi girin: ");
    scanf("%d", &sayi);

    tmp = sayi;
    basamak = 0;
    while (tmp)
    {
        basamak++;
        tmp /= 10;
    }
    tmp = sayi;
    sayac = 0;
    while (tmp)
    {
        int gecici1 = tmp % 10;
        int gecici2 = 1;
        for (int i = 0; i < basamak; i++)
            gecici2 *= gecici1;
        sayac += gecici2;
        tmp /= 10;
    }
    if (sayac == sayi)
        printf("%d sayisi armstrong sayisidir", sayi);
    else
        printf("%d sayisi armstrong sayisi degildir: %d", sayi, sayac);
    return (0);
}