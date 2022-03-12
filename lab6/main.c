#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "Rus");
    double A[]={56.4,36.5,7.7,44.3};
    for( int i=0;i<=3;i++)
    printf("%f\n", *(A + i));
    int *a;
    int x, y;
    scanf("%d", &x);
    a = (int*)malloc(x * sizeof(int));
    for (y = 0; y<x; y++)
{
    printf("a[%d] = ", y);
    scanf("%d", &a[y]);
}
    for (y = 0; y<x; y++) {
        printf("%d ", a[y]);
        free(a);
    }
    return 0;
}