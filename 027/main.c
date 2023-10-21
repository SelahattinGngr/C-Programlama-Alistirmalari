#include "stdio.h"
#include "stdlib.h"

int main(int ac, char **av)
{
    int n1;
    int n2;
    printf("baslangic sayisini girin: ");
    scanf("%d", &n1);
    printf("bitis sayisini girin: ");
    scanf("%d", &n2);
    while (n1 <= n2)
    {
        if (n1 > 1)
        {
            if ((n1 == 2) || (n1 == 3))
                printf(" [%d] ", n1);
            else if ((n1 % 2 != 0) && (n1 % 3 != 0))
                printf(" [%d] ", n1);
        }
        n1++;
    }
    return (0);
}