#include <stdio.h>
int main()
{
    int groups;
    scanf("%d", &groups);
    for (int i = 0; i < groups; i++)
    {
        int count, north[5000], south[5000];
        scanf("%d", &count);
        for (int j = 0; j < count; j++)
            scanf("%d %d", &north[j], &south[j]);
        for (int j = 0; j < count - 1; j++)
        {
            for (int k = 0; k < count - 1 - i; k++)
            {
                if (north[k] > north[k + 1])
                {
                    int tmp = north[k];
                    north[k] = north[k + 1];
                    north[k + 1] = tmp;
                    tmp = south[k];
                    south[k] = south[k + 1];
                    south[k + 1] = tmp;
                }
            }
        }
        int result[5000];
        for (int j = 0; j < count; j++)
        {
            result[j] = 1;
            for (int k = 0; k < j; k++)
            {
                if (south[j] > south[k] && result[k] + 1 > result[j])
                    result[j] = result[k] + 1;
            }
        }
        int max = result[0];
        for (int j = 1; j < count; j++)
        {
            if (result[j] > max)
                max = result[j];
        }
        printf("%d\n", max);
    }
    return 0;
}
