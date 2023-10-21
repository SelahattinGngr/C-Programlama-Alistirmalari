#include <stdio.h>
#include <stdlib.h>

void anaMenu()
{
    printf("\n");
    printf("____________________________________\n");
    printf("|banka bilgileri uygulamasi        |\n");
    printf("|1- hesabinda bakiye olanlar       |\n");
    printf("|2- hesabinda bakiye olmayanlar    |\n");
    printf("|3- bankaya borcu olanlar          |\n");
    printf("|0- cikis                          |\n");
    printf("------------------------------------\n");
    printf("\n");
}

int main(int argc, char **argv)
{
    int no;
    int bakiye;
    int secim;
    char ad[30];
    FILE *dosya = fopen("musteriler.txt", "r");
    if (!dosya)
    {
        printf("Dosya bulunamadi\n");
        return 1;
    }

    while (1)
    {
        anaMenu();
        scanf("%d", &secim);
        rewind(dosya); // Dosyanın başına dön

        switch (secim)
        {
        case 1:
            printf("hesabinda bakiye olanlar\n");
            while (fscanf(dosya, "%d\t%s\t%d", &no, ad, &bakiye) != EOF)
            {
                if (bakiye > 0)
                    printf("%d, %s, %d\n", no, ad, bakiye);
            }
            break;

        case 2:
            printf("hesabinda bakiye olmayanlar\n");
            while (fscanf(dosya, "%d\t%s\t%d", &no, ad, &bakiye) != EOF)
            {
                if (bakiye == 0)
                    printf("%d, %s, %d\n", no, ad, bakiye);
            }
            break;

        case 3:
            printf("bankaya borcu olan\n");
            while (fscanf(dosya, "%d\t%s\t%d", &no, ad, &bakiye) != EOF)
            {
                if (bakiye < 0)
                    printf("%d, %s, %d\n", no, ad, bakiye);
            }
            break;

        case 0:
            fclose(dosya);
            return 0;

        default:
            printf("Hatali giris\n");
        }
    }
    fclose(dosya);
    return 0;
}
