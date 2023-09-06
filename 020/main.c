#include "stdio.h"
#include "stdlib.h"

int main(int ac, char **av)
{
    int nbr1;
    int nbr2;

    printf("lutfen toplanacak sayilari giriniz:\n");
    scanf("%d", &nbr1);
    scanf("%d", &nbr2);

    int *pt1;
    int *pt2;

    pt1 = &nbr1;
    pt2 = &nbr2;

    printf("%d + %d = %d", *pt1, *pt2, *pt1 + *pt2);
    return (0);
}