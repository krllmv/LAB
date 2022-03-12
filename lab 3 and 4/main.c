#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf(((a<56) && (a>21)) ? "true\n":"false\n");

    int b;
    scanf("%d", &b);
    b = b & (1 << 111);
    printf(b != 0 ? "true":"false");

    return 0;
}