#include "stdio.h"

int main(int ac, char **av)
{
    char str[100];
    int i;

    printf("lutfen cumle girin : \n");
    fgets(str, 100, stdin);

    i = 0;
    while (str[i])
        i++;

    printf("girilen metnin uzunlugu %d kadardir.", i - 1);
    /*  fgets \n komutunu gorene kadar input alir \n gordugu zaman
        yazilan metin + \n i degiskenimize atar
        bu yuzden \n'i saymamis gibi davranmak icin i - 1 ile cikti aldim */

    return (0);
}