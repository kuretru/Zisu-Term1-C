#include <stdio.h>

int isStack();
int isQueue();
int count;
int dataIn[100];
int dataOut[100];

int main()
{
    int groups;
    scanf("%d", &groups);
    for (int i = 0; i < groups; i++)
    {
        scanf("%d", &count);
        for (int j = 0; j < count; j++)
            scanf("%d", &dataIn[j]);
        for (int j = 0; j < count; j++)
            scanf("%d", &dataOut[j]);
        int stack = isStack();
        int queue = isQueue();
        if (stack && !queue)
            printf("stack\n");
        else if (!stack && queue)
            printf("queue\n");
        else if (stack && queue)
            printf("both\n");
        else
            printf("neither\n");
    }
    return 0;
}

int isStack()
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        if (dataOut[i] != dataIn[count - 1 - i])
            break;
        if (i == count - 1)
            result = 1;
    }
    return result;
}

int isQueue()
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        if (dataOut[i] != dataIn[i])
            break;
        if (i == count - 1)
            result = 1;
    }
    return result;
}
