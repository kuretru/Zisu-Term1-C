#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int reverse(char *text)
{
    int length = strlen(text);
    for (int i = 0, j = length - 1; i < j; i++, j--)
        if (text[i] != text[j])
            return 0;
    return 1;
}
int qcmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    int i = strlen(x);
    int j = strlen(y);
    if (i == j)
    {
        if (i == j)
            return strcmp(x, y) > 0;
        return i - j;
    }
    return i - j;
}
int main()
{
    char text[100][256];
    int count = 0;
    while (scanf("%s", text[count++]) != EOF)
        ;
    count--;
    qsort(text, count, sizeof(text[0]), qcmp);
    for (int i = 0; i < count; i++)
        if (reverse(text[i]))
            puts(text[i]);
    return 0;
}
