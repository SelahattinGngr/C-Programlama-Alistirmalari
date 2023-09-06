#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(int ac, char **av)
{
    int dik1;
    int dik2;
    float hipotenus;

    printf("iki dik kenari giriniz: ");
    scanf("%d %d", &dik1, &dik2);

    hipotenus = sqrt((dik1 * dik1) + (dik2 * dik2));

    printf("hipotenus : %.2f", hipotenus);
    return (0);
}