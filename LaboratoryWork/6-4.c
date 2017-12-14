#include <stdio.h>
#include <string.h>
#define size 100

void reverse(char text[])
{
    int i, j;
    char tmp;
    for (i = 0, j = strlen(text) - 1; i < j; i++, j--)
    {
        tmp = text[i];
        text[i] = text[j];
        text[j] = tmp;
    }
}

int main()
{
    char text[size];
    gets(text);
    reverse(text);
    puts(text);
    return 0;
}
