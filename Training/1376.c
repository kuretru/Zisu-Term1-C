#include <math.h>
#include <stdio.h>
int pCount, points[101][2];
int eCount, edges[101][3] = {0};
float distance[101];
float result;
void DP(int start, int end, float sum)
{
    for (int i = 0; i < eCount; i++)
    {
        if (edges[i][0] == start && !edges[i][2])
        {
            sum += distance[i];
            if (edges[i][1] == end)
            {
                if (sum < result)
                    result = sum;
                return;
            }
            else
            {
                edges[i][2] = 1;
                DP(edges[i][1], end, sum);
                edges[i][2] = 0;
            }
        }
    }
}
int main()
{
    int start, end;
    scanf("%d", &pCount);
    for (int i = 1; i <= pCount; i++)
        scanf("%d %d", &points[i][0], &points[i][1]);
    scanf("%d", &eCount);
    for (int i = 0; i < eCount; i++)
    {
        scanf("%d %d", &edges[i][0], &edges[i][1]);
        int x0 = points[edges[i][0]][0];
        int x1 = points[edges[i][0]][1];
        int y0 = points[edges[i][1]][0];
        int y1 = points[edges[i][1]][1];
        distance[i] = sqrt((y0 - x0) * (y0 - x0) + (y1 - x1) * (y1 - x1));
    }
    scanf("%d %d", &start, &end);
    result = 2000000000;
    DP(start, end, 0);
    printf("%.2f\n", result);
    return 0;
}
