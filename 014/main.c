#include "stdio.h"

int main(int ac, char **av)
{
    char str[50];

    printf("Lutfen metin girin: ");
    fgets(str, 50, stdin);

    if (str[0] != ' ')
        printf("%c", str[0]);
    for (int i = 0; str[i]; i++)
    {
        if ((str[i] != ' ' && str[i - 1] == ' '))
            printf("%c", str[i]);
    }
    return (0);
}