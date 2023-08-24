#include "stdio.h"

int main(int ac, char **av)
{
    int s1;
    int s2;
    char operator;

    printf("birinci sayi : ");
    scanf("%d", &s1);
    printf("yapilacak islem (+ - * /) : ");
    scanf(" %c", &operator);
    printf("ikinci sayi : ");
    scanf("%d", &s2);

    switch (operator)
    {
    case '+':
        printf("%d %c %d = %d", s1, operator, s2, s1 + s2);
        break;
    case '-':
        printf("%d %c %d = %d", s1, operator, s2, s1 - s2);
        break;
    case '*':
        printf("%d %c %d = %d", s1, operator, s2, s1 * s2);
        break;
    case '/':
        printf("%d %c %d = %d", s1, operator, s2, s1 / s2);
        break;
    default:
        printf("hatali operator girdiniz\n");
        break;
    }
}