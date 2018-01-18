#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max, count, U, F, D;
    int time = 0, result = 0, *data;
    scanf("%d %d %d %d %d\n", &max, &count, &U, &F, &D);
    data = malloc(count * sizeof(int));
    for (int i = 0; i < count; i++)
    {
        char c = getchar();
        getchar();
        if (c == 'f')
            data[i] = F * 2;
        else
            data[i] = U + D;
    }
    while (result < count - 1)
    {
        time += data[result++];
        if (time + data[result] > max)
            break;
    }
    printf("%d\n", result);
    return 0;
}
