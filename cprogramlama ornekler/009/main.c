#include "stdio.h"

int main(int ac, char **av)
{
    int i;
    char c;
    printf("bir harf girin: ");
    scanf("%c", &c);
    printf("harfi kac kere ekrana basalim: ");
    scanf("%d", &i);

    while (i--)
        printf(" [%c] ", c);

    return (0);
}