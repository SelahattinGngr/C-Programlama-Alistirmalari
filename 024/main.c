#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(int ac, char **av)
{

    int toplam;
    int sayi;
    int sayac;

    toplam = 0;
    sayac = 0;
    printf("lutfen toplanacak bir sayi girin: ");
    scanf("%d", &sayi);

    while (sayi > 0)
    {
        toplam += sayi;
        sayac++;
        printf("lutfen toplanacak bir sayi girin: ");
        scanf("%d", &sayi);
    }

    printf("%d adet sayinin toplami: %d\n", sayac, toplam);
    printf("%d sayisinin %d sayisina ortalamasi: %d", toplam, sayac, (toplam / sayac));
    return (0);
}