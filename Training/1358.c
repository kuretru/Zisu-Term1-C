#include <stdio.h>
int gparts;
char data[11];
int number[7];
int result;
int charToInt(int start, int end)
{
    int value = 0;
    int pow = 1;
    for (int i = end; i >= start; i--)
    {
        value += (data[i] - '0') * pow;
        pow *= 10;
    }
    return value;
}
void calc(int start, int end, int parts)
{
    if (parts == 0)
    {
        number[parts] = charToInt(start, end);
        int value = 1;
        for (int i = 0; i <= gparts; i++)
        {
            value *= number[i];
        }
        if (value > result)
            result = value;
        return;
    }
    for (int i = start; i <= end - parts; i++)
    {
        number[parts] = charToInt(start, i);
        calc(i + 1, end, parts - 1);
    }
}
int main()
{
    int groups;
    scanf("%d", &groups);
    for (int i = 0; i < groups; i++)
    {
        int length;
        result = 0;
        scanf("%d %d\n", &length, &gparts);
        gets(data);
        calc(0, length - 1, gparts);
        printf("%d\n", result);
    }
    return 0;
}
