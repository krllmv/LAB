#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int a,b;
    scanf("%x", &a);
    printf("%o\n", a);
    printf("%x %x\n", a, a << 4);
    printf("%o %x\n", a, ~a);
    scanf("%o", &b);
    printf("%o", b&a);
    return 0;
}