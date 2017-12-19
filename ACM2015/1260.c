#include <stdio.h>

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int limit, count;
    int data[101][2];
    int bag[101][1001] = {0};
    scanf("%d %d", &limit, &count);
    for (int i = 1; i <= count; i++)
        scanf("%d %d", &data[i][0], &data[i][1]);
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= limit; j++)
        {
            if (j >= data[i][0])
                bag[i][j] = max(data[i][1] + bag[i - 1][j - data[i][0]], bag[i - 1][j]);
            else
                bag[i][j] = bag[i - 1][j];
        }
    }
    printf("%d\n", bag[count][limit]);
    return 0;
}
