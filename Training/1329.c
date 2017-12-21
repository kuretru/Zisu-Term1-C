#include <stdio.h>

int count, sum;
int data[200];
int list[200];
int lCount = 0;

int find(int start, int result)
{
    result += data[start];
    if (result > sum)
        return 0;
    else if (result == sum)
        return 1;
    else
    {
        for (int i = start + 1; i <= count; i++)
        {
            if (find(i, result) == 1)
            {
                list[lCount++] = i;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    scanf("%d %d", &count, &sum);
    for (int i = 1; i <= count; i++)
        scanf("%d", &data[i]);
    for (int i = 1; i <= count; i++)
    {
        if (find(i, 0) == 1)
        {
            list[lCount++] = i;
            break;
        }
    }
    for (int i = lCount - 1; i >= 0; i--)
        printf("%d  %d\n", list[i], data[list[i]]);
    return 0;
}
