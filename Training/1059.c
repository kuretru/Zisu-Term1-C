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
    int size[101], value[101], bag[1001] = {0};
    scanf("%d %d", &limit, &count);
    for (int i = 0; i < count; i++)
        scanf("%d %d", &size[i], &value[i]);
    for (int i = 0; i < count; i++)
        for (int j = limit; j >= size[i]; j--)
            bag[j] = max(bag[j], bag[j - size[i]] + value[i]);
    printf("%d\n", bag[limit]);
    return 0;
}
