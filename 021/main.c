#include "stdio.h"
#include "stdlib.h"

int main(int ac, char **av)
{
    int decimal;
    int binary;

    printf("lutfen donusturulecek sayiyi girin: ");
    scanf("%d", &decimal);

    for (int i = 8; i > 0; i--)
    {
        binary = decimal >> i;
        if (binary & 1)
            printf(" 1 ");
        else
            printf(" 0 ");
    }
    return (0);
}