#include <stdio.h>
#include "string.h"


int main() {
    char string1[100];
    char string2[100];
    scanf("%s", string1);
    scanf("%s", string2);
//1.Осуществить конкатенацию (сложение) двух строк.
// strcat-объединение строк
    strcat(string1, string2);
    printf("%s \n", string1);
//4.Осуществить сравнение первых n символов двух строк.
//strncmp-сравнивание строк посимвольно
    int n;
    scanf("%d", &n);
    if (strncmp(string1, string2, n) == 0)
        printf("Same\n");
    else printf("Different\n");
// 5.Осуществить копирование одной строки в другую строку.
//strcpy-функция копирует Си-строку srcptr, включая завершающий нулевой символ в строку назначения, на которую ссылается указатель destptr.
    char string3[100];
    strcpy(string3, string2);
    printf("%s\n", string3);
// 8.Осуществить поиск в строке первого вхождения указанного символа.
//strchr-функция strchr выполняет поиск первого вхождения символа symbol в строку string.
    int ch = 'p';
    char *ach;
    ach = strchr(string2, ch);
    if (ach == NULL)
        printf("symbol not found\n");
    else
        printf("symbol = %d\n", ach - string2 + 1);
// 11.Определить длину отрезка одной строки, содержащего символы из множества символов,
//входящих во вторую строку.
//strspn-функция выполняет поиск символов строки string2 в строке string1.
    int y;
    y = strspn(string1, string2);
    printf("%d", y);
    return 0;
}