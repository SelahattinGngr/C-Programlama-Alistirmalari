#include "stdio.h"

int main(int ac, char **av)
{
    int n;
    int i;
    int tek;
    int cift;

    printf("kac sayi alinacak : ");
    scanf("%d", &n);
    int nbr[n];
    i = 0;
    while (i < n)
    {
        printf("%d. sayiyi girin: ", i + 1);
        scanf("%d", &nbr[i]);
        i++;
    }
    tek = cift = i = 0;
    while (i < n)
    {
        if (nbr[i] % 2 == 0)
            cift += nbr[i];
        else
            tek += nbr[i];
        i++;
    }
    printf("girilen tek sayilarin toplami : %d\n", tek);
    printf("girilen cift sayilarin toplami : %d", cift);

    return (0);
}