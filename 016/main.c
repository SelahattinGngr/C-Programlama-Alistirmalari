#include "stdio.h"
#include "stdlib.h"
int main(int ac, char **av)
{
    int *dizi;
	int buyuk;
    int n;
    printf("sayi diziniz kac elemanli olacak? : ");
    scanf("%d", &n);

	// malloc void * tipinde geri dondugu icin type cast yaparak olasi hatalarin onune geciyoruz
	// type cast / malloc hakkinda bilginiz yoksa arastirmanizi taviye ederim
    dizi = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		printf("%d. sayiyi girin : ", i + 1);
		scanf("%d",&dizi[i]);
	}

	buyuk = dizi[0];
	for (int i = 0; i < n; i++)
		if (buyuk < dizi[i])
			buyuk = dizi[i];
	printf("en buyuk sayimiz : %d", buyuk);
	return (0);
}