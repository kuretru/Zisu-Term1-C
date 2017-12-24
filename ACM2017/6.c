#include <stdio.h>
#include <string.h>
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int groups;
    scanf("%d", &groups);
    while (groups--)
    {
        int count, limit;
        int data[500][3], bag[6001];
        scanf("%d %d", &count, &limit);
        for (int i = 0; i < count; i++)
            scanf("%d %d %d", &data[i][0], &data[i][1], &data[i][2]);
        memset(bag, 0, sizeof(bag));
        for (int i = 0; i < count; i++)
            for (int j = 0; j < data[i][2]; j++)
                for (int k = limit; k >= data[i][0]; k--)
                    bag[k] = max(bag[k], bag[k - data[i][0]] + data[i][1]);
        printf("%d\n", bag[limit]);
    }
    return 0;
}
