#include "stdio.h"

int main(int ac, char **av)
{
    char str[100];
    char karakter;
    int count;
    int i;

    printf("Cumlenizi giriniz : \n");
    fgets(str, 100, stdin);
    printf("Aranacak harf : \n");
    scanf("%c", &karakter);

    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] == karakter)
            count++;
        i++;
    }
    printf("cumledeki %c harfi %d adettir", karakter, count);

    return (0);
}