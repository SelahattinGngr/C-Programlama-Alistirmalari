#include "stdio.h"

int main(int ac, char **av)
{
    int vize;
    int final;
    float ort;

    printf("Vize notunuzu giriniz: ");
    scanf("%d", &vize);
    printf("Final notunuzu giriniz: ");
    scanf("%d", &final);
    ort = ((float)vize * 0.4) + ((float)final * 0.6);
    printf("Ortalamaniz: %.2f\n", ort);
    if (ort >= 50)
        printf("Gectiniz\n");
    else
        printf("Kaldiniz\n");

    return (0);
}