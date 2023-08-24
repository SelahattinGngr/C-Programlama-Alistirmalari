#include "stdio.h"

int main(int ac, char **av)
{
    int sayi;
    int buyuk;

    printf("bir sayi girin: ");
    scanf("%d",&sayi);
    
    buyuk = 0;
    while (sayi > 0)
    {
        int gecici = sayi % 10;
        if (buyuk < gecici)
            buyuk = gecici;
        sayi /= 10;
    }
    printf("girdiginiz sayidaki en buyuk rakam: %d", buyuk);
    return (0);
}