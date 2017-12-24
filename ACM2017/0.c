#include <stdio.h>
int main()
{
    int groups;
    scanf("%d", &groups);
    while (groups--)
    {
        int busCount, lineCount;
        scanf("%d %d", &busCount, &lineCount);
        int dCount = 0, data[2][500];
        for (int i = 0; i < lineCount; i++)
            scanf("%d", &data[0][i]);
        for (int i = 0; i < lineCount; i++)
            scanf("%d", &data[1][i]);
        for (int i = 0; i < lineCount; i++)
        {
            if (data[0][i] > data[1][i])
            {
                int tmp = data[0][i];
                data[0][i] = data[1][i];
                data[1][i] = tmp;
            }
        }
        for (int i = 0; i < lineCount; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == i)
                    dCount++;
                else if (data[0][j] == data[0][i] && data[1][j] == data[1][i])
                    break;
            }
        }
        double result = dCount * 1.0 / busCount;
        printf("%.3lf\n", result);
    }
    return 0;
}
