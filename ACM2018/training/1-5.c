#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int qcmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    int i = strlen(x);
    int j = strlen(y);
    if (i == j)
        return strcmp(x, y) > 0;
    return i - j;
}
int main()
{
    int n;
    char text[100][100];
    while (1)
    {
        scanf("%d\n", &n);
        if (n <= 0)
            break;
        for (int i = 0; i < n; i++)
            gets(text[i]);
        qsort(text, n, sizeof(text[0]), qcmp);
        for (int i = 0; i < n; i++)
            puts(text[i]);
        putchar('\n');
    }
    return 0;
}
