#include "stdio.h"

int main(int ac, char **av)
{
    int n;
    int i;
    int buyuk;
    int kucuk;

    printf("Kac adet sayi girilecek: ");
    scanf("%d", &n);

    int dizi[n];

    for (i = 0; i < n; i++)
    {
        printf("%d. sayiyi verin: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    buyuk = kucuk = dizi[0];

    for (i = 1; i < n; i++)
    {
        if (buyuk < dizi[i])
            buyuk = dizi[i];
        if (kucuk > dizi[i])
            kucuk = dizi[i];
    }
    printf("verilen dizideki en buyuk sayi : %d\n", buyuk);
    printf("verilen dizideki en kucuk sayi : %d", kucuk);

    return (0);
}