#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define size 100
#define R 16

int htoi(char hex[])
{
    int i, number;
    int result = 0, weight = 1;
    for (i = strlen(hex) - 1; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            number = hex[i] - '0';
        else
        {
            hex[i] = tolower(hex[i]);
            if (hex[i] >= 'a' && hex[i] <= 'f')
                number = hex[i] - 'a' + 10;
        }
        result += number * weight;
        weight *= R;
    }
    return result;
}

int main()
{
    int i, groups;
    char hex[size];
    scanf("%d\n", &groups);
    for (i = 0; i < groups; i++)
    {
        gets(hex);
        printf("%d\n", htoi(hex));
    }
    return 0;
}
