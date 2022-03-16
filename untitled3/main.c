#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "Rus");
    double A[]={56.4,36.5,7.7,44.3};
    for( int i=0;i<=3;i++)
        printf("%lf\n", *(A + i));
    double *a;
    int x = 4,y;
    a = (double*)malloc(x * sizeof(double));
    if (a == NULL)
    {
        printf ("malloc error");
        return 0;
    }
    a[0]=56.4;
    a[1]=36.5;
    a[2]=7.7;
    a[3]=44.3;
    for (y = 0; y<x; y++) {
        printf(" %lf ", a[y]);
    }
    free(a);
    return 0;
}