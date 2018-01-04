#include <stdio.h>
#include <string.h>
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
void removeABC(int data[])
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
}
void removeAAA(int data[])
{
    for (int i = 1; i < 10; i++)
        if (data[i] >= 3)
            data[i] -= 3;
}
int main()
{
    int groups;
    scanf("%d", &groups);
    while (groups--)
    {
        int count, number;
        int data[10] = {0};
        scanf("%d", &count);
        for (int i = 0; i < count; i++)
        {
            scanf("%d", &number);
            data[number]++;
        }
        int noanswer = 1;
        for (int i = 1; i < 10; i++)
        {
            data[i]++;
            for (int j = 1; j < 10; j++)
            {
                if (data[j] >= 2)
                {
                    int newdata[10];
                    memcpy(newdata, data, 10 * sizeof(int));
                    newdata[j] -= 2;
                    removeAAA(newdata);
                    removeABC(newdata);
                    if (iswin(newdata))
                    {
                        if (noanswer)
                            noanswer = 0;
                        else
                            printf(" ");
                        printf("%d", i);
                        break;
                    }
                }
            }
            data[i]--;
        }
        if (noanswer)
            printf("NO!");
        printf("\n");
    }
    return 0;
}
