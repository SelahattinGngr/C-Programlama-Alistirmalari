#include "stdio.h"

int main(int ac, char **av)
{
    // tersten okundugunda kendisini veren sayiya palindormik sayi denir
    // 1551 / 987789 gibi ornekler

    int sayi;
    int tmp;
    int tersi;

    printf("sayi giriniz: ");
    scanf("%d", &sayi);
    tmp = sayi;
    while (tmp != 0)
    {
        tersi *= 10;
        tersi += tmp % 10;
        tmp /= 10;
    }

    if (sayi == tersi)
        printf("%d sayisi palindormik sayidir", sayi);
    else
        printf("%d sayisi palindormik sayi degildir", sayi);
    return (0);
}