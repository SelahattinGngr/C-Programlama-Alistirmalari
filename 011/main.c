#include "stdio.h"
#include "string.h"

int main(int ac, char **av)
{
	char str[50];
	char str1[50];
	int i;
	int j;

	printf("metin girin : ");
	fgets(str, 50, stdin);

	i = 0;
	j = strlen(str) - 2;
	while (str[j])
	{
		str1[i] = str[j];
		j--;
		i++;
	}
	str1[i] = '\0';
	printf("%s", str1);
}