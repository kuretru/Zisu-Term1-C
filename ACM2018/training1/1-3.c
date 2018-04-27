#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count1(char *text)
{
    int result = 0, length = strlen(text);
    for (int i = 0; i < length; i++)
        if (text[i] == '1')
            result++;
    return result;
}
int qcmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    int i = count1(x);
    int j = count1(y);
    if (i == j)
        return strcmp(x, y) > 0;
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
        puts(text[i]);
    return 0;
}
