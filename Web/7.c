#include <stdio.h>
int count;
float max, cost, result, data[21][2];
void calc(int index, float remain, float sum)
{
    if (data[index][0] * cost > remain)
        return;
    if (index == count)
    {
        if (sum < result)
            result = sum;
        return;
    }
    remain -= data[index][0] * cost;
    calc(index + 1, max, sum + (max - remain) * data[index][1]);
    calc(index + 1, remain, sum);
}
int main()
{
    int groups;
    scanf("%d", &groups);
    while (groups--)
    {
        float remain;
        result = 2000000000;
        scanf("%d", &count);
        scanf("%f %f %f", &max, &remain, &cost);
        for (int i = 0; i < count; i++)
            scanf("%f %f", &data[i][0], &data[i][1]);
        scanf("%f", &data[count][0]);
        calc(0, remain, 0);
        if (result != 2000000000)
            printf("%.2f\n", result);
        else
            printf("NO\n");
    }
    return 0;
}
