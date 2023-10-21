#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(int ac, char **av)
{
    int no;
    int ort;
    int sayac;
    char ad[30];
    FILE *dosya;
    if ((dosya = fopen("ogrenci_kayit.txt", "w")) == NULL)
    {
        printf("dosya olusturulamadi");
        return (1);
    }
    printf("ogrencinin no, ad, ortalamasini giriniz\n");
    // ctrl + z yazip enter basinca eof oluyor
    printf("cikis icin EOF (ctrl + z) basiniz\n");
    scanf("%d %s %d", &no, ad, &ort);
    sayac = 0;
    while (!feof(stdin))
    {
        fprintf(dosya, "%d\t%s\t%d\n", no, ad, ort);
        sayac++;
        printf("\n: ? : ");
        scanf("%d %s %d", &no, ad, &ort);
    }
    fclose(dosya);
    /* -------------------------------------------- */
    /* yazma islemi tamamlandi, okuma kismina gecis */
    /* -------------------------------------------- */
    if ((dosya = fopen("ogrenci_kayit.txt", "r")) == NULL)
    {
        printf("dosya bulunamadi");
        return (1);
    }
    printf("no\tad\tort\n");
    while (sayac--)
    {
        fscanf(dosya, "%d\t%s\t%d", &no, ad, &ort);
        printf("%d\t%s\t%d\n", no, ad, ort);
    }
    fclose(dosya);
    return (0);
}