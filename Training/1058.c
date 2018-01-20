#include <stdio.h>
int x, y;
int data[102][102][2];
int calc(int px, int py)
{
    if (data[px][py][1])
        return data[px][py][1];
    int result[4] = {0}, max = 0;
    if (px - 1 > 0 && data[px][py][0] > data[px - 1][py][0])
        result[0] = calc(px - 1, py);
    if (py - 1 > 0 && data[px][py][0] > data[px][py - 1][0])
        result[1] = calc(px, py - 1);
    if (px + 1 <= x && data[px][py][0] > data[px + 1][py][0])
        result[2] = calc(px + 1, py);
    if (py + 1 <= y && data[px][py][0] > data[px][py + 1][0])
        result[3] = calc(px, py + 1);
    for (int i = 0; i < 4; i++)
        if (result[i] > max)
            max = result[i];
    data[px][py][1] = ++max;
    return max;
}
int main()
{
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= y; j++)
            scanf("%d", &data[i][j][0]);
    int max = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            int result = calc(i, j);
            if (result > max)
                max = result;
        }
    }
    printf("%d\n", max);
     return 0;
}
