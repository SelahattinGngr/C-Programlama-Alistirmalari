#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void hacim(int r)
{
    float hacim;

    hacim = (4 / 3) * 3.14 * (r * r * r);
    printf("hacim: %.2f\n", hacim);
}

void alan(int r)
{
    float alan;

    alan = 4 * 3.14 * (r * r);
    printf("alan: %.2f\n", alan);
}
int main(int ac, char **av)
{
    int r;
    printf("kurenin yari capini girin: ");
    scanf("%d", &r);

    alan(r);
    hacim(r);
    return (0);
}