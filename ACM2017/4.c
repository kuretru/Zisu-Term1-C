#include <stdio.h>
int iswin(int data[])
{
    int result = 1;
    for (int i = 1; i < 10; i++)
    {
        if (data[i] > 0)
        {
            result = 0;
            break;
        }
    }
    return result;
}
int removeABC(int data[])
{
    for (int i = 1; i < 8; i++)
    {
        while (data[i] >= 1)
        {
            if (data[i] > 0 && data[i + 1] > 0 && data[i + 2] > 0)
            {
                data[i]--;
                data[i + 1]--;
                data[i + 2]--;
            }
            else
                break;
        }
    }
    return iswin(data);
}
int removeAAA(int data[])
{
    int newData[10];
    for (int i = 1; i < 10; i++)
        newData[i] = data[i];
    for (int i = 1; i < 10; i++)
        if (newData[i] >= 3)
            newData[i] -= 3;
    if (iswin(newData))
        return 1;
    else
        return removeABC(newData);
}
int removeAA(int data[])
{
    for (int i = 1; i < 10; i++)
    {
        if (data[i] >= 2)
        {
            data[i] -= 2;
            if (iswin(data))
                return 1;
            else if (removeAAA(data))
            {
                data[i] += 2;
                return 1;
            }
            data[i] += 2;
        }
    }
    return 0;
}
int main()
{
    int groups;
    scanf("%d", &groups);
    while (groups--)
    {
        int count, number;
        int data[10] = {0}, result[10];
        scanf("%d", &count);
        for (int i = 0; i < count; i++)
        {
            scanf("%d", &number);
            data[number]++;
        }
        count = 0;
        for (int i = 1; i < 10; i++)
        {
            data[i]++;
            result[i] = removeAA(data);
            if (result[i])
                count++;
            data[i]--;
        }
        if (count == 0)
            printf("NO!");
        else
        {
            for (int i = 1; i < 10; i++)
            {
                if (result[i])
                {
                    printf("%d", i);
                    if (--count)
                        printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
