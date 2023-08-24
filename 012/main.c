#include "stdio.h"

int main(int ac, char **av)
{
    int n;
    int i;
    int j;

    printf("Kac adet sayi girilecek: ");
    scanf("%d", &n);

    int dizi[n];

    for (i = 0; i < n; i++)
    {
        printf("%d. sayiyi verin: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (dizi[i] < dizi[j])
            {
                int gecici = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = gecici;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf(" [%d] ", dizi[i]);

    return (0);
}