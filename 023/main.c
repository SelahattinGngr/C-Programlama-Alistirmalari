#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void alanHesapla(int yaricap)
{
    float sonuc;

    sonuc = ((yaricap * yaricap) * 3.14);
    printf("dairemizin alani: %.2f\n", sonuc);
}

void cevreHesapla(int yaricap)
{
    float sonuc;

    sonuc = (yaricap * (2 * 3.14));
    printf("dairemizin cevresi: %.2f\n", sonuc);
}

int main(int ac, char **av)
{
    int yaricap;

    printf("yaricapi giriniz: ");
    scanf("%d", &yaricap);

    alanHesapla(yaricap);
    cevreHesapla(yaricap);
    return (0);
}