#include <stdio.h>
int main()
{
    int groups;
    scanf("%d", &groups);
    for (int i = 0; i < groups; i++)
    {
        int count,data[8844];
        int result=0;
        scanf("%d", &count);
        for (int j = 0; j < count;j++)
            scanf("%d", &data[j]);
        for (int j = 1; j < count - 1;j++)
        {
            if(data[j]>data[j-1]&&data[j]>data[j+1])
                result++;
        }
        printf("%d\n", result);
    }
    return 0;
}
