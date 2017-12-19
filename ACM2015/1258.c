#include <stdio.h>

int isLetter(char c);
void sort(int index, int end);
char data[2000] = {' '};

int main()
{
    char c;
    int length = 1;
    while ((c = getchar()) != '#')
        data[length++] = c;
    data[length++] = ' ';
    for (int i = 1; i < length; i++)
    {
        if (isLetter(data[i]) && data[i - 1] == ' ')
        {
            for (int j = i; j < length; j++)
            {
                if (isLetter(data[j]) && data[j + 1] == ' ')
                {
                    sort(i, j + i);
                    i = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i < length - 1; i++)
        putchar(data[i]);
    return 0;
}

int isLetter(char c)
{
    return c >= 'a' && c <= 'z';
}

void sort(int index, int end)
{
    for (int i = index; i < end; i++)
    {
        for (int j = index; j < end - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                char tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
}
