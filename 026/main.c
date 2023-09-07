#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"

int main(int ac, char **av)
{
    int dizi[20];
    int toplam;
    srand(time(NULL));

    toplam = 0;
    for (int i = 0; i < 20; i++)
    {
        dizi[i] = rand() % 100 + 1;
        toplam += dizi[i];
    }
    for (int i = 0; i < 20; i++)
        printf(" [%d] ", dizi[i]);

    printf("\nsayilarin toplami: %d", toplam);
    return (0);
}