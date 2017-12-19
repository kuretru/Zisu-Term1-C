#include <ctype.h>
#include <stdio.h>
#include <string.h>

void addPhone(int number);
int result[100000][2];
int rCount;
int dic[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 0, 7, 7, 8, 8, 8, 9, 9, 9, 0};

int main()
{
    int count;
    scanf("%d\n", &count);
    rCount = 0;
    for (int i = 0; i < count; i++)
    {
        char text[20];
        gets(text);
        int pow = 1;
        int num = 0;
        for (int j = strlen(text) - 1; j >= 0; j--)
        {
            char c = tolower(text[j]);
            if (c >= 'a' && c <= 'z')
            {
                num += dic[c - 'a'] * pow;
                pow *= 10;
            }
            else if (c >= '0' && c <= '9')
            {
                num += (c - '0') * pow;
                pow *= 10;
            }
        }
        addPhone(num);
    }
    if (rCount == count)
        printf("No duplicates.\n");
    else
    {
        int newResult[100000][2];
        int nCount = 0;
        for (int i = 0; i < rCount; i++)
        {
            if (result[i][1] > 1)
            {
                newResult[nCount][0] = result[i][0];
                newResult[nCount++][1] = result[i][1];
            }
        }
        for (int i = 0; i < nCount - 1; i++)
        {
            for (int j = 0; j < nCount - 1 - i; j++)
            {
                if (newResult[j][0] > newResult[j + 1][0])
                {
                    int tmp0 = newResult[j][0];
                    int tmp1 = newResult[j][1];
                    newResult[j][0] = newResult[j + 1][0];
                    newResult[j][1] = newResult[j + 1][1];
                    newResult[j + 1][0] = tmp0;
                    newResult[j + 1][1] = tmp1;
                }
            }
        }
        for (int i = 0; i < nCount; i++)
        {
            int a = newResult[i][0] / 10000;
            printf("%d-%d %d\n", a, newResult[i][0] - a * 10000, newResult[i][1]);
        }
    }
    return 0;
}

void addPhone(int number)
{
    for (int i = 0; i <= rCount; i++)
    {
        if (i == rCount)
        {
            result[i][0] = number;
            rCount++;
        }
        if (result[i][0] == number)
        {
            result[i][1]++;
            break;
        }
    }
}
