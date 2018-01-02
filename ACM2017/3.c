#include <stdio.h>
int main()
{
    int lines, max, groups;
    int data[100][2];
    scanf("%d %d %d", &lines, &max, &groups);
    for (int i = 0; i < groups; i++)
        scanf("%d %d", &data[i][0], &data[i][1]);
    int result = 0, start = 1, index = 0;
    while (start <= lines)
    {
        int end = start + max - 1;
        if (index < groups && data[index][0] <= end)
        {
            for (int i = index; i < groups; i++)
            {
                if (data[i][0] <= end)
                {
                    if (data[i][0] + data[i][1] <= end)
                    {
                        end -= data[i][1];
                        index++;
                    }
                    else
                        end = data[i][0] - 1;
                }
                else
                    break;
            }
        }
        start = end + 1;
        result++;
    }
    printf("%d\n", result);
    return 0;
}
